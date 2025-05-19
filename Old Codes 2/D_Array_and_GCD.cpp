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

const int N=1e7+7;

vector<int> p(4e5,0);
vector<bool> is_prime(N, true);

void sieve() {
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i*i <= N; i++) {
        if (is_prime[i]) {
            for (int j = i*i; j <= N; j += i) is_prime[j] = false;
        }
    }
}

void asikM(){
    ll n;
    cin >> n;
    vector <ll> v(n);
    for (auto& x:v) cin >>x; 
    sort(allr(v));
    ll coins=0,c=n;
    forni{
        if(v[i]>=p[i]){
            c--;
            coins+=v[i]-p[i];
        }
        else{
            if(coins>=p[i]-v[i]){
                c--;
                coins-=p[i]-v[i];
            }
            else break;
        }
    }
    co(c)
    // co(n-c)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin >> t;
    sieve();
    ll l=0;
    for(int i=0;i<N;i++){
        if(l==4e5) break;
        if(is_prime[i]) p[l++]=i;
    }
    while (t--)
    asikM();      
    return 0;
}