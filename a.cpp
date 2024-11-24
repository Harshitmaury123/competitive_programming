#include <iostream>
#include <vector>
using namespace std;

#include <iostream>

void solve() {
    int n;
    cin >> n;
    int arr[2 * n];
    int off = 0, on = 0;

    for (int i = 0; i < 2 * n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 2 * n; i++) {
        if (arr[i] == 0) {
            off++;
        } else {
            on++;
        }
    }
    if (off == 0) {
        cout << "0 0" << endl;
    } else {
        if (off >= on) {
            cout << (off % 2) << " " << on << endl;
        } else {
            cout << (on % 2) << " " << off << endl;
        }
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
}
