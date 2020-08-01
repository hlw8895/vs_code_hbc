#include <iostream>
#include <array>
#include <algorithm>
#include <limits>
using namespace std;
int count = 0;
int total;
int n, m;
array<int, 21> coin = {};
array<int, 999999> temp = {};

int dfs(int total)
{
    if (temp[total] != -1)
        return temp[total];

    int minimal = numeric_limits<int>::max();
    for (int i = 0; i < m; i++)
    {
        int current_coin = coin[i];
        if (current_coin > total)
        {
            continue;
        }
        temp[total - current_coin] = dfs(total - current_coin);
        minimal = min(minimal, temp[total - current_coin]);
    }
    if (minimal == numeric_limits<int>::max())
    {
        return numeric_limits<int>::max();
    }
    else
    {

        return minimal + 1;
    }
}

int main()
{
    temp.fill(-1);
    temp[0] = 0;
    cin >> total >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> coin[i];
    }
    cout << dfs(total) << endl;
}
