#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int compare_desc(const void *a, const void *b) {
    int int_a = *((int *)a);
    int int_b = *((int *)b);

    if (int_a < int_b) {
        return 1;
    } else if (int_a > int_b) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    ll a,b;
    char s;
    cin>>a>>s>>b;
    if(s=='*')
        cout<<a*b<<endl;
    else if(s=='+')
        cout<<a+b<<endl;
    else if(s=='/')
        cout<<a/b<<endl;
    else if(s=='-')
        cout<<a-b<<endl;

    return 0;
}