#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int compare_asc(const void *a, const void *b) {
    int int_a = *((int *)a);
    int int_b = *((int *)b);

    if (int_a < int_b) {
        return -1;
    } else if (int_a > int_b) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n,m;
    cin >> n >> m;
    int ar[n];
    for (int i = 0; i < n; i++) cin >> ar[i];
    int sum = 0;
    qsort(ar, n, sizeof(int), compare_asc);
    for (int i = 0; i < n; i++)
    {
        if(ar[i]<0) 
        {
            sum+=abs(ar[i]);
            m--;
            if(m==0) break;
        }
    }
    cout<<sum<<endl;
    return 0;
}