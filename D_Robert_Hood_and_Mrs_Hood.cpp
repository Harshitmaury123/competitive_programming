#include <bits/stdc++.h>
using namespace std;

int solve() {
    int n, d, k;
    cin >> n >> d >> k;
    vector<pair<int, int>> jobs(k);
    for (int i = 0; i < k; i++) {
        cin >> jobs[i].first >> jobs[i].second;
    }
    sort(jobs.begin(), jobs.end());

    int maxoverlap = 0, minoverlap = k + 1;
    int best_brother = 1, best_mother = 1;
    int l = 0, rt = 0,overlap = 0;
    
    for (int i = 1; i <= n - d + 1; i++) {
        while (l < k && jobs[l].second < i) {
            overlap--;
            l++;
        }
        while (rt < k && jobs[rt].first <= i + d - 1) {
            if (jobs[rt].second >= i) {
                overlap++;
            }
            rt++;
        }
        if (overlap > maxoverlap) {
            maxoverlap =overlap;
            best_brother = i;
        }
        if (overlap < minoverlap) {
            minoverlap =overlap;
            best_mother = i;
        }
    }

    cout << best_brother << " " << best_mother << endl;
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
