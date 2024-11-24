#include <bits/stdc++.h>
using namespace std;
#define ok(x) cout << x << endl;
#define MOD % 1000000007
#define readV(vec)                       \
    for (int i = 0; i < vec.size(); ++i) \
    {                                    \
        cin >> vec[i];                   \
    }
#define okV(vec)           \
    for (auto it : vec)    \
    {                      \
        cout << it << " "; \
    }                      \
    cout << endl;
#define FOR(n) for (int i = 0; i < n; ++i)
#define maxV(v) *max_element(v.begin(), v.end());
#define minV(v) *min_element(v.begin(), v.end());
#define ll long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    map<char, int> mp;
    for (char it : s)
    {
        mp[it]--;
    }
    for (auto it : mp)
    {
        FOR(-it.second)
        {
            ans += it.first;
        }
    }
    int cons = 1;
    for (int i = 1; i < n; ++i)
    {
        if (ans[i] == ans[i - 1])
        {
            cons++;
        }
        if (cons == 2)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (ans[j] != ans[i])
                {
                    swap(ans[j], ans[i]);
                    cons = 1;
                    break;
                }
            }
            if (cons == 2)
            {
                ok(ans);
                return;
            }
        }
    }
    ok(ans);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}