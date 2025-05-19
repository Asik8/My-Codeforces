#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define pob pop_back
#define s 3000

int main()
{
    // Using  Sieve Of Eratosthenes Algorithms
    vector<bool> is_prime(s+1, true);
    is_prime[0] = is_prime[1] = false;
    for(int i=2;i*i<=s;i++)
    {
        if(is_prime[i])
        {
            for(int j=i*i;j<=s;j+=i)
            {
                is_prime[j] = false;
            }
        }
    }
    vector<ll> primes;
    for(int i=0;i<=s;i++)
    {
        if(is_prime[i]) primes.pb(i);
    }

    // Main Code:- 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,ans=0;
    cin>>n;
    for(int j=2;j<=n;j++)
    {
        int num = j;
        int c=0;
        for(int i:primes)
        {
            if(i*i>num) break;
            if(num%i == 0)
            {
                c++;
                while(num%i == 0)
                {
                    num/=i;
                }
            }
            if(c>2) break;               
        }
        if(num>1) c++;
        if(c == 2) ans++;
    }
    cout<<ans<<endl;

    return 0;
}


