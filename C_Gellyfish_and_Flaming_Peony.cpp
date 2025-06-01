#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pbs insert
#define pi pair<ll,ll>
#define py cout<<"YES\n";
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define el "\n";
#define fl(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define flr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define flx(x1) for(auto x:x1) ct(x) elc
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

vector<int> findPrimeFactors(int n){
    vector<int> primeFactors(9, 0);
    int j = 0;
    if (n % 2 == 0) {
        primeFactors[j++] = 2;
        while (n % 2 == 0)
            n >>= 1;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            primeFactors[j++] = i;
            while (n % i == 0) n /= i;
        }
    }
    if (n > 2) primeFactors[j++] = n;
    vector<int> PrimeFactors(j);
    for(int i = 0; i < j; i++) PrimeFactors[i] = primeFactors[i];
    return PrimeFactors;
}

void findShortestSubsequence(vector<int> &dp, vector<int> a, int index, vector<int> primeFactors){
    int n = a.size();
    for (int j = index; j < n; j++) {
        int bitmask = 0;
        for (int p = 0;p < primeFactors.size(); p++) 
            if ((a[j] % primeFactors[p]) == 0) bitmask ^= (1 << p);

        for (int i = 0; i < dp.size(); i++) {
            if (dp[i] == n + 1) continue;
            dp[bitmask & i] = min(dp[bitmask & i], dp[i] + 1);
        }
    }
}

int printMinimumLength(vector<int> a){
    int Min = a.size() + 1;
    for (int i = 0; i < a.size() - 1; i++) {
        vector<int> primeFactors = findPrimeFactors(a[i]);
        int n = primeFactors.size();
        vector<int> dp(1 << n, a.size() + 1);
        int setBits = (1 << n) - 1;
        dp[setBits] = 1;
        findShortestSubsequence(dp, a, i + 1, primeFactors);
        Min = min(dp[0], Min);
    }
    return Min;
}


void asikM(){
    int n,c=0;
    cin >> n;
    vector <int> v(n);
    for (auto& x:v) cin >>x; 
    forni c=__gcd(c,v[i]);
    forni v[i]/=c;
    if(count(all(v),1)==n){
        co(0)
        return;
    }
    auto x=printMinimumLength(v);
    ll cnt=0;
    forni if(v[i]>1) cnt++;
    if(x!=1) co(cnt+x-2) else co(cnt)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin >> t;
    while (t--)
    asikM();      
    return 0;
}