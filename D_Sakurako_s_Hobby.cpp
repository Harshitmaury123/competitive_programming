#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    string s;
    cin >> s;
    vector<int> ans(n, 0);
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++) {
        if (visited[i]) {
            continue;
        }

        int count = 0;
        int j = i;
        vector<int> cycle;

        
        while (!visited[j]) {
            visited[j] = true;
            cycle.push_back(j);
            if (s[j] == '0') {
                count++;
            }
            j = v[j] - 1;
        }

      
        for (int idx : cycle) {
            ans[idx] = count;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
 }
}
