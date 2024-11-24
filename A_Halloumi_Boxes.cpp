 #include<iostream>
 #include<vector>
 using namespace std;
 int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int k;
    cin>>k;
    bool f=true;
     vector<int>arr(n);
    for(int i=0;i<n;i++){
     cin>>arr[i];
     if(i>0 && arr[i-1]>arr[i])
      f=false;
    }
    if(k==1){
        if(f==false)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    }
 }