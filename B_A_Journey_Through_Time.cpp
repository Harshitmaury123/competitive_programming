#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, p;
    cin >> n >> p;
    
    vector<pair<ll, ll>> points(n);
    for(ll i = 0; i < n; i++) {
        cin >> points[i].first >> points[i].second;
    }
    sort(points.begin(), points.end());
    
    ll ans = 0;
    ll left = 0;
    
    for(ll right = 0; right < n; right++) {
        while(left < right && points[right].first - points[left].first > p) {
            left++;
        }
        
        for(ll i = left; i < right; i++) {
            ans = max(ans, 
                     points[i].second + points[right].second + 
                     abs(points[i].first - points[right].first));
        }
    }
    
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}