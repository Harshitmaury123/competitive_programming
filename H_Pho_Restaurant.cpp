#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Asquare cout.tie(NULL);

// Aliases
using ll = long long;
using lld = long double;
using ull = unsigned long long;

// // Constants
// const lld pi = 3.141592653589793238;
// const ll INF = LONG_LONG_MAX;
// const ll mod = 1e9 + 7;

// // TypeDEf
// typedef pair<ll, ll> pll;
// typedef vector<ll> vll;
// typedef vector<pll> vpll;
// typedef vector<string> vs;
// typedef unordered_map<ll, ll> umll;

// Macros
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define rl(i, m, n) for (int i = n; i >= m; i--)
#define py cout << "YES\n";
#define pm cout << "-1\n";
#define pn cout << "NO\n";
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()

// Code
void solve() {
    ll n;
    cin >> n;
    vector<string> s(n);  // Use the correct vector 's' for input
    int maxi = 0;
    string lar = "";  // Added initialization of the largest string
    
    // Reading input and finding the largest string
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        int len = s[i].length();
        if (len > maxi) {
            maxi = len;
            lar = s[i];
        }
    }

    string res = "";
    // Concatenate all strings except the largest one
    for (int i = 0; i < n; i++) {
        if (s[i] != lar) {
            res += s[i];
        }
    }

    int x1 = 0, x2 = 0, y1 = 0, y2 = 0;
    int n1 = lar.length();
    int n2 = res.length();

    // Counting '0's and '1's in the largest string
    for (int i = 0; i < n1; i++) {
        if (lar[i] == '0') {
            x1++;
        } else {
            x2++;
        }
    }

    // Counting '0's and '1's in the concatenated remaining string
    for (int i = 0; i < n2; i++) {
        if (res[i] == '0') {
            y1++;
        } else {
            y2++;
        }
    }

    // Output based on conditions
    if (x1 > x2 && y1 == res.size()) {
        cout << x1 << endl;
    } else if (x1 < x2 && y2 == res.size()) {
        cout << x2 << endl;
    } else {
        cout << min(x1, x2) + min(y1, y2) << endl;
    }
}

// Main
int main() {
    Code By Asquare
    solve();
    return 0;
}
