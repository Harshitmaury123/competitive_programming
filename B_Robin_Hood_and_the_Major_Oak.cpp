#include<iostream>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;
    long long start=n;
    long long last=n-k+1;  
    long long odd_cnt = (start+1)/2-(last)/2;
    if (odd_cnt % 2 == 0) {
        cout << "YES" << endl;
        //yes
    } else {
        cout << "NO" << endl;
       //no
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
    //goat
}
