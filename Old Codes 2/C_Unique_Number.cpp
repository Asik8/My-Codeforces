#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if(n>45) cout<<"-1\n";
        else if(n<=9) cout<<n<<endl;
        else {
            vector<int> d;
            int rem = n;
            for(int i=9;i>0;i--){
                if(rem>=i) {
                    d.push_back(i);
                    rem -= i;
                }
            }
            for(int i=d.size()-1;i>= 0;--i) cout<<d[i];
            cout<<endl;
        }
    }
    return 0;
}