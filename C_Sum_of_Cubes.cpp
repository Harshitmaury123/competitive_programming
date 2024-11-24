#include <bits/stdc++.h>
using namespace std;
using ll = long long;

set<ll> cubes;
const ll N = 1e18;

void precalc()
{
    for (ll i = 1; i * i * i <= N; i++)
    {
        cubes.insert(i * i * i);
    }
}

void solve()
{
    ll x;
    cin >> x;

    // Check if x can be expressed as the sum of two cubes
    for (ll j = 1; j * j * j <= x; j++)
    {
        ll j_cubed = j * j * j;
        if (cubes.count(x - j_cubed))
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    precalc();
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
