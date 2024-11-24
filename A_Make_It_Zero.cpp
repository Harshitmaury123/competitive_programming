#include<iostream>
#include<vector>
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
        if(n%2==0){
            //2ops for a0 to an
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else{
            cout<<4<<endl;
            //2ops for a0 to an-1
            cout<<1<<" "<<n-1<<endl;
            cout<<1<<" "<<n-1<<endl;
            //2ops for an-1 to an
            cout<<n-1<<" "<<n<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
    }
}