#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        vector<long long> v(n);
        long long sum1 = 0;

        for(long long i = 0; i < n; i++){
            v[i] = k + i;
            sum1 += v[i];
        }

        long long sum2 = 0;
        long long mini = LLONG_MAX;
        for(long long i = 0; i < n - 1; i++){ // Check partitioning up to n-1
            sum2 += v[i];
            long long sum3 = sum1 - sum2;
            long long diff = abs(sum2 - sum3);
            mini = min(mini, diff);
        }

        cout << mini << endl;
    }
    return 0;
}
