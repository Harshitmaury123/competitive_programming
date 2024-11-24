#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s,m;
        cin>>n>>s>>m;
         vector<pair<int,int>>vec;
        for(int i=0;i<n;i++){
           int p1,p2;
           cin>>p1>>p2;
           vec.push_back(make_pair(p1,p2));
        }
        int maxi=vec[0].first-0;
        for(int j=1;j<vec.size();j++){
            maxi=max(maxi,vec[j].first-vec[j-1].second);
        }
        maxi=max(maxi,10-vec[vec.size()-1].second);
        if(maxi>=s){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}