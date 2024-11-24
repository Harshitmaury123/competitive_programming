// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while (t--){
//         int n;
//         cin>>n;
//         vector<int>arr(n);
//         bool yes=false;
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         int left=0;
//         while(left<n-1){
//         int mul1=1,mul2=1;
//         for(int i=0;i<=left;i++){
//             mul1*=arr[i];
//         }
//         for(int j=left+1;j<n;j++){
//             mul2*=arr[j];
//         }
//           left++;
//         if(mul1==mul2){
//             yes=true;
//             break;
//         }
//         }
//         if(yes)
//         cout<<left<<endl;
//         else
//         cout<<-1<<endl;
//     }
// }
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        int total_twos = 0;
        bool yes=false;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 2) {
                total_twos++;
            }
        }

        int left_twos = 0;
        int k = -1;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == 2) {
                left_twos++;
            }
            if (left_twos == total_twos - left_twos) {
                k = i + 1; 
                yes=true;
                break;
            }
        }
           if(yes)
        cout << k << endl;
        else
        cout<<-1<<endl;
    }
    return 0;
}
