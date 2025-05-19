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
const int N=1005;
vec(bool) ch(N,false);

void asikM(){
    ll n;
    cin >> n;
    int a[n][5];
    forni{
        fl(j,0,5) cin>>a[i][j];
    }
    bool f= false;
    fl(j,0,5){
        fl(k,j+1,5){
            ll c1=0,c2=0,c=0;
            forni{
                if(a[i][j]==1 && a[i][k]==1) c++;
                else{
                    if(a[i][j]==1) c1++;
                    if(a[i][k]==1) c2++;
                }
            }
            if(c+c1+c2==n && c+c1>=n/2 && c+c2>=n/2){
                f= true;
            }
        }
    }
    if(f) py else pn
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