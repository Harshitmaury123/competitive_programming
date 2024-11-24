#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;

int t[1001][1001][2][2];

int solve(string &s, string &s1, int i, int j, int taken1, int taken2) {
    // Base case: if we've processed all characters
    if (i > j) {
        return (taken1 && taken2) ? 0 : -1e9;
    }
    
    // Base case: single character
    if (i == j) {
        bool isFromS1 = (i < s1.length());
        if (taken1 && taken2) return 1;
        if (isFromS1 && !taken2) return -1e9;
        if (!isFromS1 && !taken1) return -1e9;
        if (isFromS1) return taken2 ? 1 : -1e9;
        return taken1 ? 1 : -1e9;
    }
    
    if (t[i][j][taken1][taken2] != -1) {
        return t[i][j][taken1][taken2];
    }
    
    int ans = -1e9;
    
    // If characters at both ends match
    if (s[i] == s[j]) {
        bool iFromS1 = (i < s1.length());
        bool jFromS1 = (j < s1.length());
        
        // Only update taken flags if we're using these characters
        int newTaken1 = taken1;
        int newTaken2 = taken2;
        
        // Update flags based on which characters we're including
        if (iFromS1 || jFromS1) newTaken1 = 1;
        if (!iFromS1 || !jFromS1) newTaken2 = 1;
        
        if (i != j) {  // Don't count same character twice
            int subResult = solve(s, s1, i + 1, j - 1, newTaken1, newTaken2);
            if (subResult != -1e9) {
                ans = 2 + subResult;
            }
        } else {
            int subResult = solve(s, s1, i + 1, j - 1, newTaken1, newTaken2);
            if (subResult != -1e9) {
                ans = 1 + subResult;
            }
        }
    }
    
    // Try skipping characters
    ans = max(ans, solve(s, s1, i + 1, j, taken1, taken2));
    ans = max(ans, solve(s, s1, i, j - 1, taken1, taken2));
    
    return t[i][j][taken1][taken2] = ans;
}

int longestPalindromeSubseq(string s1, string s2) {
    string s = s1 + s2;
    int n = s.length();
    memset(t, -1, sizeof(t));
    
    int result = solve(s, s1, 0, n - 1, 0, 0);
    return result < 0 ? 0 : result;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s1, s2;
        cin >> s1 >> s2;
        int result = longestPalindromeSubseq(s1, s2);
        cout << result << endl;
    }
    return 0;
}