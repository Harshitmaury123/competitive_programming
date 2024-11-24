#include <vector>
#include <unordered_set>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> removeElementsForKWindow(vector<int> list1, vector<int> list2, int K)
{
    unordered_set<int> set1;
    vector<int> result;

    for (int num : list1)
    {
        set1.insert(num);
        if (set1.size() == K)
            break;
    }
    int cnt = 0;
    int n = list2.size(); 
    for (int i = 0; i < n; i++)
    {
        if (set1.find(list2[i]) != set1.end())
        {
            continue;
        }
        else
        {
            result.push_back(list2[i]);
            cnt++;
            if (cnt >= K)
            {
                while (i < n - 1)
                {
                    i++;
                    result.push_back(list2[i]);
                }
            }
        }
    }

    return result;
}

int main()
{
    vector<int> list1 = {1, 2, 3, 4, 5, 6};
    vector<int> list2 = {3, 1, 1, 2, 4, 5, 6, 1};
    int K = 2;
    vector<int> result = removeElementsForKWindow(list1, list2, K);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}
