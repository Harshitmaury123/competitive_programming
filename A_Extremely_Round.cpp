#include<iostream>
#include<math.h>
#include<numeric>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt=0;
        int m=n;
        while(n>0){
             cnt++; 
           n=n/10;
        }
          int first_digit = m;
        while (first_digit >= 10) {
            first_digit /= 10;
        }
        cout<<9*(cnt-1)+first_digit<<endl;
    }
}