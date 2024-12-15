#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> m >> n;
    if (n == 0)
    {
        if (m == 1)
            cout << "0 0\n";
        else
            cout << "-1 -1\n";
    }
    else
    {
        string s1,s2;
        for(int i=0;i<m;i++)
        {
            int l = min(9,n);
            s1.push_back('0'+l);
            n-=l;
        }
        if(n>0) 
        {
            cout<<"-1 -1\n";
            return 0;
        }

        for(int i=m-1;i>=0;i--)
            s2.push_back(s1[i]);

        int j =0;
        while(s2[j]=='0')
        j++;
        s2[0]++;
        s2[j]--;
        cout<<s2<<" "<<s1<<endl;
    }

    return 0;
}