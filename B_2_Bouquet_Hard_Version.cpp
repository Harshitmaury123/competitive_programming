#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long
// Code
void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<pair<ll,ll>> petals(n);
    for (int i = 0; i < n; i++)
    {
        int tl;
        cin>>tl;
        petals[i].first = tl;
    }
    for (int i = 0; i < n; i++)
    {
        int tl;
        cin>>tl;
        petals[i].second = tl;
    }
    ll ans = 0;
    for (int i = 0; i < n - 1; i++)
    {
        ll p1 = petals[i].first, p2 = petals[i + 1].first, c1 = petals[i].second, c2 = petals[i + 1].second;
        if (p1 * c1 + p2 * c2 <= m)
        {
            ans = max(ans, p1 * c1 + p2 * c2);
        }
        else
        {
            if (p1 * c1 > m)
            {
                ans = max(ans, p1 * (m / p1));
            }
            else
            {
                ans = max(ans, p1 * c1 + p2 * (m / p2));
            }
        }
        if(p1*c1 <= m){
            
        }
    }
    cout << ans << endl;
}

// Main
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
//