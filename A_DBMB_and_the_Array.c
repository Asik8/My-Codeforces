#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int ar[a];
        for(int i=0;i<a;i++) scanf("%d",&ar[i]);
        int s=0;
        for(int i=0;i<a;i++)s+=ar[i];
        if(s>b) printf("NO\n");
        else if((b-s)%c==0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}