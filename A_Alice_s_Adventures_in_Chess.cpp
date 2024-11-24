//Code Like Beast
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Asquare cout.tie(NULL);

//Aliases
using ll= long long;
using lld= long double;
using ull= unsigned long long;

//Constants
const lld pi= 3.141592653589793238;
const ll INF= LONG_LONG_MAX;
const ll mod=1e9+7;

//TypeDEf
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
typedef vector<string> vs;
typedef unordered_map<ll,ll> umll;
typedef map<ll,ll> mll;

//Macros
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,m,n) for(int i=n;i>=m;i--)
#define py cout<<"YES\n";
#define pm cout<<"-1\n";
#define pn cout<<"NO\n";
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()

//Debug
#ifdef HarshitMaurya
#define debug(x) cerr << #x<<" "; cerr<<x<<" "; cerr << endl;
#else
#define debug(x);
#endif

// Operator overloads
template<typename T1, typename T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T>
istream& operator>>(istream &istream, vector<T> &v){for (auto &it : v)cin >> it;return istream;}
template<typename T1, typename T2>
ostream& operator<<(ostream &ostream, const pair<T1, T2> &p) { return (ostream << p.first << " " << p.second); }
template<typename T>
ostream& operator<<(ostream &ostream, const vector<T> &c) { for (auto &it : c) cout << it << " "; return ostream; }

// Utility functions
template <typename T>
void print(T &&t)  { cout << t << "\n"; }
void printarr(ll arr[], ll n){fl(i,n) cout << arr[i] << " ";cout << "\n";}
template<typename T>
void printvec(vector<T>v){ll n=v.size();fl(i,n)cout<<v[i]<<" ";cout<<"\n";}
template<typename T>
ll sumvec(vector<T>v){ll n=v.size();ll s=0;fl(i,n)s+=v[i];return s;}

// Mathematical functions
ll gcd(ll a, ll b){if (b == 0)return a;return gcd(b, a % b);}
ll lcm(ll a, ll b){return (a/gcd(a,b)*b);}
ll moduloMultiplication(ll a,ll b,ll mod){ll res = 0;a %= mod;while (b){if (b & 1)res = (res + a) % mod;b >>= 1;}return res;}
ll powermod(ll x, ll y, ll p){ll res = 1;x = x % p;if (x == 0) return 0;while (y > 0){if (y & 1)res = (res*x) % p;y = y>>1;x = (x*x) % p;}return res;}

// Sorting
bool sorta(const pair<int,int> &a,const pair<int,int> &b){return (a.second < b.second);}
bool sortd(const pair<int,int> &a,const pair<int,int> &b){return (a.second > b.second);}

// Code
void solve()
{
    int n, a, b;
        string s;       
        cin >> n >> a >> b;
        cin >> s;
       
    int x = 0, y = 0;
    
    int maxCyc = 2000;
    if(a==0 && b==0){
        cout<<"YES"<<endl;
        return;
    }
    
    for(int step = 0; step < maxCyc; step++) {
        char move = s[step % n];
        
        if(move == 'N') y++;
        else if(move == 'S') y--;
        else if(move == 'E') x++;
        else if(move == 'W') x--;
        
        if(x == a && y == b){ cout<<"YES"<<endl;
        return;
        }
        
    }
    
    cout<<"NO"<<endl;
}

// Main
int main()
{
    Code By Asquare
    ll t;
    cin >> t;
    fl(i,t)
    {
        solve();
    }
    return 0;
//Code by HARSHIT MAURYA
}