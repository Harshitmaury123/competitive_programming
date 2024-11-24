#include<iostream>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;
      if(a1>b1 && a2>b2 && a1>b2 && a2>b1)
      cout<<4<<endl;
      else if(((a1>b1 && a2>=b2) || (a1>=b1 && a2>b2)) && ((a1>b2 && a2>=b1) || (a1>=b2 && a2>b1)))
      cout<<4<<endl;
       else if((a1>b1 && a2>=b2) || (a1>=b1 && a2>b2) || (a1>b2 && a2>=b1) || (a1>=b2 && a2>b1))
       cout<<2<<endl;
       else
       cout<<0<<endl;
    }
}