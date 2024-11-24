#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a;
        cin>>a;
        int b;
        cin>>b;
         if(a+b+2<=n){
        cout<<"YES"<<endl;
    }
    else if(a==n && b==n){
     cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
}