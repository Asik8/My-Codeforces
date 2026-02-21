/******************************************************************
*                   In the name of Allah                         *
*----------------------------------------------------------------*
* Author   : asikM                                               *
* Institute: Daffodil International University (DIU) (Alumni)    *
* Country  : Bangladesh - Chapai Nawabganj                       *
******************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
typedef long long ll;
#define YES printf("YES\n")
#define NO  printf("NO\n")
#define rtc(x) { printf("%lld\n", (x)); return; }
#define py  { printf("YES\n"); return; }
#define pys { printf("Yes\n"); return; }
#define pn  { printf("NO\n"); return; }
#define pns { printf("No\n"); return; }
#define co(x)  printf("%lld\n", (x))
#define ct(x)  printf("%lld ", (x))
#define elc    printf("\n")
#define el     "\n"
#define fl(i, a, b, step)  for (int i = (a); i < (b); i += (step))
#define flr(i, a, b, step) for (int i = (a); i >= (b); i -= (step))
#define forni for(int i=0;i<n;i++)
int cmp(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}


void asikM() {
    ll n;
    scanf("%lld", &n);
    ll v[n];
    for(ll i=0;i<n;i++) scanf("%lld",&v[i]);
    qsort(v,n,sizeof(ll),cmp);
    ll m=0;
    for(int i=0;i<n;i++){
        if(v[i]==m){
            m++;
        }
    }
    forni{
        ll x=(v[i]*-1);
        ll a[n];
        memcpy(a,v,sizeof(v));
        fl(j,0,n,1) a[j]+=x;
        int m1=0;
        fl(j,0,n,1){
            if(a[j]==m1){
                m1++;
            }
        }
        if(m1>m) m=m1;
    }
    co(m);
}

int main() {
    ll t = 1;
    scanf("%lld", &t);
    while (t--) asikM();
    return 0;
}
