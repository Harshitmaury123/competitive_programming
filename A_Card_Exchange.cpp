#define MOD 1000000007
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template <typename T>
void readVector(std::vector<T> &vec, size_t size)
{
    vec.resize(size);
    for (size_t i = 0; i < size; ++i)
    {
        std::cin >> vec[i];
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> nums;
        readVector(nums, n);
        unordered_map<int, int> map;
        int freq = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            map[nums[i]]++;
            freq = max(freq, map[nums[i]]);
        }
        if (freq >= k)
        {
            cout << k - 1 << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
    return 0;
}
