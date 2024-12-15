#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    float a;
    cin>>a;

    if(a>=0 && a<= 25.00) cout<<"Interval ["<<0<<","<<25<<"]\n";
    else if(a>25.00 && a<= 50.00) cout<<"Interval ("<<25<<","<<50<<"]\n";
    else if(a>50.00 && a<= 75.00) cout<<"Interval ("<<50<<","<<75<<"]\n";
    else if(a>50.00 && a<= 75.00) cout<<"Interval ("<<50<<","<<75<<"]\n";
    else if(a>75.00 && a<= 100.00) cout<<"Interval ("<<75<<","<<100<<"]\n";
    else cout<<"Out of Intervals\n";

    return 0;
}