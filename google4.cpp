#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxCustomersServed(int X, vector<int> &transactions) {
    int n = transactions.size();
    int maxServed = 0;

    // Try starting from each customer position
    for (int start = 0; start < n; start++) {
        int currentFunds = X;
        int servedCount = 0;

        // Serve customers in a circular manner starting from 'start'
        for (int i = 0; i < n; i++) {
            int customerIndex = (start + i) % n;
            int transaction = transactions[customerIndex];

            if (transaction < 0) { // Withdrawal
                if (currentFunds + transaction < 0) break; // Stop if insufficient funds
                currentFunds += transaction; // Withdraw funds
            } else { // Deposit
                currentFunds += transaction; // Deposit funds
            }

            servedCount++;
        }

        maxServed = max(maxServed, servedCount); // Track maximum customers served
    }

    return maxServed;
}

int main() {
    int X = 10; 
    vector<int> transactions = {3, -4, 5, -6, 2}; 

    int result = maxCustomersServed(X, transactions);
    cout << "Maximum number of customers served: " << result << endl;

    return 0;
}
