#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Speed optimizations
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

// Type aliases
using ll = long long;
using lld = long double;
using ull = unsigned long long;

// Constants
const lld PI = 3.141592653589793238;
const ll INF = LONG_LONG_MAX;
const ll MOD = 1e9 + 7;

// Common data structure shortcuts
using pll = pair<ll, ll>;
using vll = vector<ll>;
using vpll = vector<pll>;

// Utility macros
#define rep(i, n) for(ll i = 0; i < (n); ++i)
#define pb push_back
#define all(v) v.begin(), v.end()

void solve() {
    ll n, b, c;
    cin >> n >> b >> c;
    
    if (n <=c) {
        cout << n << '\n';
        return;
    }
    
    if (b == 0 && (c+1) < (n-1)) {
        cout << -1 << '\n';
        return;
    }
    
    if (b == 0) {
        cout << n-1 << '\n';
        return;
    }
    
    
    ll ini= n-c+b-1;
    ll ans=ini/b;
    
    cout<<max(n-ans,0LL)<<endl;
}

int main() {
    FAST_IO;
    
    ll t;
    cin >> t;
    
    rep(i, t) {
        solve();
    }
    
    return 0;

    //Code by Harshit Maurya
}