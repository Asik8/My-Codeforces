#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pbk push_back
#define ins insert
#define pi pair<ll,ll>
#define py cout<<"YES\n";
#define pys cout<<"Yes\n";
#define pn cout<<"NO\n";
#define pns cout<<"No\n";
#define co(x1) cout<<x1<<"\n";
#define ct(x1) cout<<x1<<" ";
#define elc cout<<"\n";
#define el "\n";
#define fl(x1,x2,x3,x4) for(int x1=x2;x1<x3;x1+=x4)
#define flr(x1,x2,x3,x4) for(int x1=x2;x1>=x3;x1-=x4)
#define flx(x1) for(auto x:x1) ct(x) elc
#define acv(x1,x) for(auto x:x1)
#define acp(x1,x,y) for(auto [x,y]:x1)
#define forni for(int i=0;i<n;i++)
#define all(x1) x1.begin(),x1.end()
#define allr(x1) x1.rbegin(),x1.rend()
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll n,k;
    cin>>n>>k;
    if((n*n)-k==1){
        pn
        return;
    }
    vector<vector<char>> a(n, vector<char>(n,'#'));
    ll c=0,top = 0, bottom = n-1, left = 0, right = n-1;
    while(top <= bottom && left <= right && c < k){
        for(ll i=left; i<=right && c<k; i++){
            a[top][i] = 'U';
            c++;
        }
        top++;
        if(c==k) break;
        for(ll i=top; i<=bottom && c<k; i++){
            a[i][right] = 'R';
            c++;
        }
        right--;
        if(c==k) break;
        if(top <= bottom){
            for(ll i=right; i>=left && c<k; i--){
                a[bottom][i] = 'D';
                c++;
            }
            bottom--;
        }
        if(c==k) break;
        if(left <= right){
            for(ll i=bottom; i>=top && c<k; i--){
                a[i][left] = 'L';
                c++;
            }
            left++;
        }
    }
    int la=-1,rla=-1;
    fl(i,0,n,1){
        fl(j,0,n,1){
            if(a[i][j] == '#'){
                if(i < n-1 && a[i+1][j] == '#') {
                    a[i][j] = 'D';  
                    la=i;
                    rla=j;
                }
                else if(j < n-1 && a[i][j+1] == '#') {
                    a[i][j] = 'R';  
                    la=i;
                    rla=j;
                }
                else if(i > 0 && a[i-1][j] == '#') {
                    a[i][j] = 'U'; 
                    la=i;
                    rla=j; 
                }
                else if(j > 0 && a[i][j-1] == '#') {
                    a[i][j] = 'L'; 
                    la=i;
                    rla=j; 
                }
                else{
                    if(la==i-1 && rla==j) a[i][j]='U';
                    else if(la==i+1 && rla==j) a[i][j]='D';
                    else if(la==i && rla==j-1) a[i][j]='L';
                    else if(la==i && rla==j+1) a[i][j]='R';
                }
            }
        }
    }
    py
    fl(i,0,n,1){
        fl(j,0,n,1){
            cout<<a[i][j];
        }
        elc
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    asikM();      
    return 0;
}