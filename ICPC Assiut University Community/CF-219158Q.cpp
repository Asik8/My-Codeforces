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
    float a,b;
    cin>>a>>b;

    if(a>0 && b>0)
        cout<<"Q1"<<endl;
    else if(a==0 && b==0)
        cout<<"Origem"<<endl;
    else if(a==0 && b>0 || a==0 && b<0)
        cout<<"Eixo Y"<<endl;
    else if(a>0 && b==0 || a<0 && b==0)
        cout<<"Eixo X"<<endl;
    else if(a>0 && b<0)
        cout<<"Q4"<<endl;
    else if(a<0 && b<0)
        cout<<"Q3"<<endl;
    else
        cout<<"Q2"<<endl;

    return 0;
}