#include <bits/stdc++.h>
using namespace std;

#define int long long 

void solve() {
    int n;
    cin >> n;

    int maxLen = n;
    vector<int> vals(n + 1);
    unordered_map<int, vector<int>> grp;
    unordered_map<int, bool> vis;

    for (int i = 1; i <= n; i++) {
        cin >> vals[i];
        vals[i] = vals[i] - (n - i + 1);
        if (i > 1) {
            grp[vals[i]].push_back(i);
        }
    }

    queue<int> q;
    q.push(n);
    vis[n] = true;

    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        maxLen = max(maxLen, curr);

        for (auto idx : grp[curr - n]) {
            int newIdx = curr + idx - 1;
            if (!vis[newIdx]) {
                vis[newIdx] = true;
                q.push(newIdx);
            }
        }
    }

    cout << maxLen << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
