#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int knapsack(int n,int a[],int b[],int w)
{
    if(n<0 || w==0) return 0;
    if(a[n]<=w)
    {
        int op1 = knapsack(n-1,a,b,w-a[n])+b[n];
        int op2 = knapsack(n-1,a,b,w);
        return max(op1,op2);
    }
    else 
    {
        int op = knapsack(n-1,a,b,w);
        return op;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,w;
    cin>>n>>w;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin>>a[i]>>b[i];
    cout<<knapsack(n-1,a,b,w)<<endl;
    return 0;
}