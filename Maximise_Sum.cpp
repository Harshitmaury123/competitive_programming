#include <iostream>
#include <vector>
#include <algorithm>
#include<climits>
#include<bits/stdc++.h>
using namespace std;

long long solve() {
    int n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    long long negCnt=0;
    long long total_sum=0;
    long long maxNeg=LONG_LONG_MIN;
    long long minPos=LONG_LONG_MAX;
    for(long long it:arr){
        total_sum+=abs(it);
        if(it<0){
            negCnt++;
            maxNeg=max(maxNeg,it);
        }
        else{
            minPos=min(minPos,it);
        }
    }
    if(negCnt%2){
        total_sum-=2*min(minPos,abs(maxNeg));
    }
    return total_sum;


}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << endl;
    }
    return 0;
}