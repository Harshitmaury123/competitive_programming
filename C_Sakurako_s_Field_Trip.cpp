#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Speed up input/output
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Asquare cout.tie(NULL);

// Aliases
using ll = long long;
using vll = vector<ll>;

// Macros
#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,m,n) for(int i=n;i>=m;i--)
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define vr(v) v.begin(),v.end()

// Operator overloads
template<typename T1, typename T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T>
istream& operator>>(istream &istream, vector<T> &v) { for (auto &it : v) cin >> it; return istream; }
template<typename T1, typename T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }

// Code
void solve() {
    ll n;
    cin >> n;
    vll nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    ll dist = 0;
    for (int i = 0; i < n - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            dist++;
        }
    }

    ll min_dist = dist; 

    for (int i = 0; i < n / 2; i++) {
        if (nums[i] != nums[n - i - 1]) {
            ll curr_dist = dist;

            if (i > 0 && nums[i] == nums[i - 1]) {
                curr_dist--;
            }
            if (i < n - 1 && nums[i] == nums[i + 1]) {
                curr_dist--;
            }
            if ((n - i - 1) > 0 && nums[n - i - 1] == nums[n - i - 2]) {
                curr_dist--;
            }
            if ((n - i - 1) < n - 1 && nums[n - i - 1] == nums[n - i]) {
                curr_dist--;
            }

            swap(nums[i], nums[n - i - 1]);

            if (i > 0 && nums[i] == nums[i - 1]) {
                curr_dist++;
            }
            if (i < n - 1 && nums[i] == nums[i + 1]) {
                curr_dist++;
            }

            if ((n - i - 1) > 0 && nums[n - i - 1] == nums[n - i - 2]) {
                curr_dist++;
            }
            if ((n - i - 1) < n - 1 && nums[n - i - 1] == nums[n - i]) {
                curr_dist++;
            }

            min_dist = min(min_dist, curr_dist);

            swap(nums[i], nums[n - i - 1]);
        }
    }

    cout << min_dist << endl;
}

// Main function
int main()
{
    Code By Asquare
    ll t;
    cin >> t;
    fl(i, t) {
        solve();
    }
    return 0;
}
