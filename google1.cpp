#include <iostream>
#include <vector>
#include <map>
using namespace std;
#define int long long

vector<int> arr;
map<int, int> memo;

int solve(int i)
{
    if (i >= arr.size())
    {
        return 0;
    }

    if (memo.find(i) != memo.end())
    {
        return memo[i];
    }
    // if the player chooses ith ball, the opponent can choose
    // from i+1th or i+1th and i+2 th  ball. if he chooses i+1th ball,
    // user is left with [i+2,n] range. if opp chooses i+1th and i+2th both
    // ball, then player is left with [i+3,n] range to
    // choose from. Also opponent tries to choose in such a
    // way that the player has minimum value left.
    int option1 = arr[i] + min(solve(i + 2), solve(i + 3));

      // if player chooses ith and i+1th ball, opponent can choose i+2th
    // ball or i+2th and i+3th ball. if opp chooses i+2th ball,player can
    // choose in range [i+3,n]. if opp chooses i+2th and i+3th ball,
    // player can choose in range [i+4,n].Also opponent tries to choose in such a
    // way that the player has minimum value left.

    int option2 = (i + 1 < arr.size() ? arr[i] + arr[i + 1] + min(solve(i + 3), solve(i + 4)) : 0);

    memo[i] = max(option1, option2);

    return memo[i];
}

int optimalStrategyForPlayerA()
{
    memo.clear();
    return solve(0);
}

int32_t main()
{
    arr = {8, 15, 3, 7};
    cout << "Result: " << optimalStrategyForPlayerA() << endl;

    arr = {2, 2, 2, 2};
    cout << "Result: " << optimalStrategyForPlayerA() << endl;

    arr = {20, 30, 2, 2, 2, 10};
    cout << "Result: " << optimalStrategyForPlayerA() << endl;

   arr = {1,2,-3,4,5,-6};
    cout << "Result: " << optimalStrategyForPlayerA() << endl;
    return 0;
}
