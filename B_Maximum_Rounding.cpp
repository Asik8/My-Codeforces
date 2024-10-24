#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        ll co=0;
        for(char c:s) if((c-'0')>=5) co++;
        if(!co) cout<<s<<endl;
        else{
            if((s[0]-'0')>=5){
                cout<<"1";
                for(int i=0;i<s.size();i++) cout<<"0";
                cout<<endl;
            }
            else{
                ll in=0;
                for(int i=0;i<s.size();i++){
                    if((s[i]-'0')>=5){
                        in = i;
                        break;
                    }
                }
                if(in==1 && (s[0]-'0'+1)>=5){
                    cout<<"1";
                    for(int i=0;i<s.size();i++) cout<<"0";
                    cout<<endl;
                }
                else{
                    while(in>=1 && (s[in-1]-'0'+1)>=5) in--;  
                    if(in==0 && (s[0]-'0'+1)>=5){
                        cout<<"1";
                        for(int i=0;i<s.size();i++) cout<<"0";
                        cout<<endl;
                    }                 
                    else{
                        s[in-1]+=1; 
                        for(int i=0;i<in;i++) cout<<s[i];
                        for(int i=in;i<s.size();i++) cout<<"0";
                        cout<<endl;
                    }
                }
            }
        }    
    }
    return 0;
}