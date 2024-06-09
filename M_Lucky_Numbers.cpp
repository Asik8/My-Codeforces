#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    bool f = false;
    for(int i=a;i<=b;i++)
    {
        int l = i;
        while (l>0)
        {
            if (l%10 == 4 || l%10== 7) 
            {
                cout<<l<<" ";
                f = true;
            }
            l/=10;
        }
    }
    if(!f) cout<<-1<<endl;
    else cout<<endl;

    return 0;
}