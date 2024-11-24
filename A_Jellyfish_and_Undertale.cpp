#include <bits/stdc++.h>
#include<vector>
#include<iostream>
using namespace std;
#define ok(x) cout << x << endl;
#define MOD %1000000007
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
  int a,b,n;
  cin>>a>>b>>n;
  vector<int>vec(n);
  readV(vec);
  long long sum=b;
  FOR(n){
  sum+=min(vec[i],a-1);
  }
  cout<<sum<<endl;
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
