#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define co(x1) cout<<x1<<"\n";
#define f(x1,x2,x3) for(int x1=x2;x1<x3;x1++)
#define fr(x1,x2,x3) for(int x1=x2;x1>=x3;x1--)
#define forni for(int i=0;i<n;i++)
#define sz(x) x.size()
#define vec(x) vector<x>

void asikM(){
    ll n,x=0,y=0;
    cin >> n;
    vec(char) c(n,'R'); 
    string s;
    cin>>s;
    for(auto l:s){
        if(l=='N') y++;
        if(l=='S') y--;
        if(l=='E') x++;
        if(l=='W') x--;
    }
    if((x%2)!=0 || (y%2)!=0){
        pn
        return;
    }
    if(x==0 && y==0){
        if(n==2){
            pn
            return;
        }
        int f1=s.find_first_of("NSWE");
        int f2=s.find_last_of("NSWE");
        c[f1]=c[f2]='H';
    }
    else{
        forni{
            if(s[i]=='N' && y>0){
                y-=2;
                c[i]='H';
            }
            if(s[i]=='S' && y<0){
                y+=2;
                c[i]='H';
            }
            if(s[i]=='E' && x>0){
                x-=2;
                c[i]='H';
            }
            if(s[i]=='W' && x<0){
                x+=2;
                c[i]='H';
            }
        }
    }
    for(auto l:c) cout<<l;
    cout<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        asikM();      
    }
    return 0;
}