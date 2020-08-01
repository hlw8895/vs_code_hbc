#include <iostream>
#include <array>
#include <algorithm>
#include <limits>
using namespace std;
int count = 0;
int total;
int n, m;
array<int, 20> coin = {};
array<int, 50001> solution = {};
static constexpr int MAXINT = numeric_limits<int>::max();

int dfs(int total)
{
    if (solution[total] != -1)
        return solution[total];

    int minimal = MAXINT;
    for (int i = 0; i < m; i++)
    {
        int current_coin = coin[i];
        if (current_coin > total)
        {
            continue;
        }
        solution[total - current_coin] = dfs(total - current_coin);
        minimal = min(minimal, solution[total - current_coin]);
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
    solution.fill(MAXINT);
    solution[0] = 0;
    cin >> total >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> coin[i];
    }
    for (int current = 1; current <= total; current++)
        for (int i = 0; i < m; i++)
        {
            if (coin[i] <= current && solution[current - coin[i]] != MAXINT)
            {
                solution[current] = min(solution[current], solution[current - coin[i]] + 1);
            }
        }
    cout << solution[total] << endl;
}
