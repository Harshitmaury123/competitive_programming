#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = 0;  // Initialize ans to 0
        
        if(n%2==0){
            for(int i=0; i<=n/2; i++){
                if(s[i] != s[n-i-1]){
                    continue;
                } else {
                    ans = (n/2 - i) * 2;
                    break;
                }
            }
        } else {
            for(int i=0; i<=n/2; i++){
                if(i==n/2){
                ans=1;
                break;
                }
                if(s[i] != s[n-i-1]){
                    continue;
                } else {
                    ans = (n/2 - i) * 2 + 1;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
