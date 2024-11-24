#include <bits/stdc++.h>
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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
        if(s[i]==s[n-1]){
           cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}