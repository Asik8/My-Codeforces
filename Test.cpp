#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define pb push_back
#define pr pop_back
#define pi pair<int, int>
#define pl pair<ll, ll>
#define vi vector<int>
#define vl vector<ll>
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

ll gcd(ll X, ll Y) { return !Y ? X : gcd(Y, X % Y); }
ll lcm(ll X, ll Y) { return X * Y / gcd(X, Y); }

ll recursion_binary_search(vector<ll> &nums, ll target, ll l, ll r)
{
    if (l > r)
        return -1;
    ll mid = (l + r) / 2;
    if (nums[mid] == target)
        return mid;
    if (nums[mid] < target)
        return recursion_binary_search(nums, target, mid + 1, r);
    return recursion_binary_search(nums, target, l, mid - 1);
}
ll Binarysearch(vector<ll> &nums, ll target)
{
    int l = 0, r = nums.size() - 1;
    sort(nums.begin(), nums.end());
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}
ll lowerBound(vector<ll> &arr, ll n, ll x)
{
    // Smallest Index such that "arr[ind]>=x"
    sort(arr.begin(), arr.end());
    ll l = 0, r = arr.size() - 1;
    ll ans = arr.size();
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}
ll upperBound(vector<ll> &arr, ll n, ll x)
{
    // Smallest Index such that "arr[ind]>x"
    ll l = 0, r = arr.size() - 1;
    ll ans = arr.size();
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (arr[mid] > x)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return ans;
}
int random(int l, int r)
{
    mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    return uniform_int_distribution<int>(l, r)(rng);
}
void solve()
{
    ll n, k, m;
    cin >> n >> m >> k;
    vl a(m), q(k);
    for (ll i = 0; i < m; i++)
        cin >> a[i];
    for (ll i = 0; i < k; i++)
        cin >> q[i];

    if (abs(n - k) > 1)
    {
        for (ll i = 0; i < m; i++)
            cout << "0";
        cout << endl;
        return;
    }

    map<ll, ll> mp;
    for (ll i = 0; i < k; i++)
    {
        mp[q[i]]++;
    }
    vl ct(m);
    ll ctzero = 0;
    for (ll i = 0; i < m; i++)
    {
        if (mp[a[i]])
            ct[i] = 1;
        else
            ct[i] = 0, ctzero++;

        // cout<<ct[i];
    }
    if (ctzero == 0)
    {
        for (ll i = 0; i < m; i++)
            cout << "1";
        cout << endl;
        return;
    }
    if (ctzero > 1)
    {
        for (ll i = 0; i < m; i++)
            cout << "0";
        cout << endl;
        return;
    }
    for (ll i = 0; i < m; i++)
    {
        if (ct[i] == 1)
            cout << "0";
        else
            cout << "1";
    }
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
