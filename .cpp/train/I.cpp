#include <iostream>
#include <array>
using namespace std;

static constexpr int MAX_CNT = 10;

int n = 0, m = 0;
int kid_friend_number = 0;
array<int, MAX_CNT + 1> join = {};
array<array<bool, MAX_CNT>, MAX_CNT> is_friend = {};

static bool check(int kid, int group)
{
    for (int i = 0; i < n; ++i)
    {
        if (i != kid && join[i] == group && is_friend[i][kid] == false)
            return false;
    }
    return true;
}

static bool dfs(const int kid)
{
    if (kid >= n)
    {
        return true;
    }
    for (int i = 1; i <= m; ++i)
    {
        if (join[kid] == 0 && check(kid, i))
        {
            join[kid] = i;
            if (dfs(kid + 1))
            {
                return true;
            }
            join[kid] = 0;
        }
    }
    return false;
}

int main()
{

    while (cin >> n >> m)
    {
        is_friend = {};
        join = {};
        for (int i = 0; i < n; ++i)
        {

            cin >> kid_friend_number;
            for (int j = 0; j < kid_friend_number; ++j)
            {
                int friend_id;
                cin >> friend_id;
                is_friend[i][friend_id] = true;
            }
        }
        if (m >= n || dfs(0))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
