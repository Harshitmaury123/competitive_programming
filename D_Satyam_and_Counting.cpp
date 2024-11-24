#include<iostream>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        vector<char> arr = {'a', 'e', 'i', 'o', 'u'};
        
       int times_A=n/5;
       int times_E=n/5;
       int times_I=n/5;
       int times_O=n/5;
       int times_U=n/5;
       int rem=n%5;
     if (rem > 0) times_A++;
        if (rem > 1) times_E++;
        if (rem > 2) times_I++;
        if (rem > 3) times_O++;
        if (rem > 4) times_U++;
        for(int i=0;i<times_A;i++){
            s+="a";
        }
        for(int i=0;i<times_E;i++){
            s+="e"; 
        }
        for(int i=0;i<times_I;i++){
            s+="i";
            }
            for(int i=0;i<times_O;i++){
                s+="o";
                }
                for(int i=0;i<times_U;i++){
                    s+="u";
                    }

        cout << s << endl;
    }
}
