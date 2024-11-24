#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<numeric>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        bool yes=false;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(__gcd(arr[i],arr[j])<=2){
                    yes=true;
                    break;
                }
            }
        }
        if(yes)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}