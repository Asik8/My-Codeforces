// Solution:- 1
// -------------------------------------<>----------------------------------------
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--) {
//         ll l1,l2,r1,r2;
//         cin >>l1>>r1>>l2>>r2;
//         if(r1<l2) cout<<1<<endl;
//         else
//         {
//             vector <pair<int,int>>v(101,{0,0});
//             for(int i=l1;i<=r1;i++) v[i].second = 1;
//             for(int i=l2;i<=r2;i++) 
//             {
//                 if(v[i].second == 1) v[i].second = 3;
//                 else v[i].second = 2;
//             }
//             int l = min(min(l1,r1),min(l2,r2));
//             int r = max(max(l1,r1),max(l2,r2));
//             int ans = 0;
//             for(int i=l;i<r;i++) 
//             {
//                 if(v[i].second == 1 && v[i+1].second == 3)ans++;
//                 else if(v[i].second == 2 && v[i+1].second == 3)ans++;
//                 else if(v[i].second == 3 && v[i+1].second == 3)ans++;
//                 else if(v[i].second == 3 && v[i+1].second == 1)ans++;
//                 else if(v[i].second == 3 && v[i+1].second == 2)ans++;
//                 else if(v[i].second == 1 && v[i+1].second == 2)ans++;
//                 else if(v[i].second == 2 && v[i+1].second == 1)ans++;
//                 else if(v[i].second == 0 && v[i+1].second == 1)ans++;
//                 else if(v[i].second == 0 && v[i+1].second == 2)ans++;
//             }
//             cout<<ans<<endl;
//         }       
//     }
//     return 0;
// }

// --------------------------------<>--------------------------------------
// Solution 2:- 
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--) {
        ll l1,l2,r1,r2;
        cin >>l1>>r1>>l2>>r2;
        if(r1<l2) cout<<1<<endl;
        else
        {
            int l = max(l1,l2);
            int r = min(r1,r2);
            if(l>r) cout<<"1\n";
            else 
            {
                int ans = 0;
                ans+= r-l;
                if(min(l1,l2)<l) ans++;
                if(max(r1,r2)>r) ans++;
                cout<<ans<<endl;
            }
        }       
    }
    return 0;
}