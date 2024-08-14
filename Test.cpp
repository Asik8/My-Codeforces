#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n,value;
    cin>>n>>value;
    long long a[n];
    for(long long i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    long long l=0,r=n-1;
    bool f = false;
    while (l<=r)
    {
        long long mid = (l+r)/2;
        if(a[mid] == value)
        {
            f = true;
            break;
        }
        else if(a[mid]<value) l = mid+1;
        else if(a[mid]>value) r = mid-1;
    }  
    if(f == true) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}