#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string t;
        cin>>t;
        long long n=s.length();
        long long m=t.length();
        long long i=0,j=0;
        while(i<n && j<m){
            if(s[i]=='?'){
                s[i]=t[j];
                i++;
                j++;
            }
            else{
                if(s[i]==t[j]){
                    i++;
                    j++;
                }
                else{
                    i++;
                }
            }
        }
        if(j==m){
            cout<<"YES"<<endl;
            for(long long i=0;i<n;i++){
                if(s[i]!='?'){
                   cout<<s[i];
                }
                else{
                    cout<<'a';
                }
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}