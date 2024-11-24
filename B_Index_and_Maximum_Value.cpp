#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, m;
        cin >> n >> m;
        vector<long long> a(n);
        long long max_val = LLONG_MIN;

        for (long long i = 0; i < n; i++) {
            cin >> a[i];
            max_val = max(max_val, a[i]);
        }

        for (int i = 0; i < m; i++) {
            char c;
            cin >> c;
            long long l, r;
            cin >> l >> r;
             if(c=='+' && max_val<=r && max_val>=l){
                cout<<++max_val<<" ";
             }
             else if(c=='-' && max_val<=r && max_val>=l) {
               cout<<--max_val<<" ";
             }
             else{
                cout<<max_val<<" ";
             }
        }
        cout << endl;
    }
    return 0;
}
