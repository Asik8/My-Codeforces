#include<stdio.h>
#define ll long long

void asikM(){
    ll n,in=0;
    scanf("%lld",&n);
    ll a[n];
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);
    for(int i=0;i<n;i++){
        if(a[i]==n){
            in =i;
            break;
        }
    }
    ll tm=a[in];
    a[in]=a[0];
    a[0]=tm;
    for(int i=0;i<n;i++) printf("%lld ",a[i]);
    printf("\n");
}

int main(){
    ll t;
    scanf("%lld",&t);
    while(t--) asikM();
    return 0;
}