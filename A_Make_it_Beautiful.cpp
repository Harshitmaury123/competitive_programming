#include<iostream>
#include<vector>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == 1) {
        cout << a[0] << endl;
        return;
    }

    if (n == 2) {
        cout << a[1] - a[0] << endl;
        return;
    }

    if (n == 3) {
        long long temp = a[1] - a[0];
        long long temp2 = a[2] - temp;
        cout << temp2 << endl;
        return;
    }

    if (n > 3) {

        long long temp = a[n - 2] - a[n - 3]; 
        for (int i = n - 4; i >= 0; i--) {
            temp -= a[i];
        }
        cout << a[n - 1] - temp << endl;  
        return;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
