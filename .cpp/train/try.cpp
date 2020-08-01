#include <bits/stdc++.h>
using namespace std;
int count = 0;
int total;
int n, m;
array<int, 21> coin = {};
static array<int, 999999> temp = {};
int dfs(int total)
{
    if (total == 0)
        return 0;
    int minimal = numeric_limits<int>::max();
    for (int i = 0; i < m; i++)
    {
        int current_coin = coin[i];
        if (current_coin > total)
        {
            continue;
        }
        minimal = min(minimal, temp(total - current_coin));
    }
    // 行了，挺晚了，我就不等你接着想了，我建议这么改皮一下。
    // 你这里判断一下minimal是不是INT_MAX，如果是的话继续返回INT_MAX就行了，不是的话就返回minimal+1，更好理解，你用if这么写吧
    if (minimal == numeric_limits<int>::max())
    {
        return numeric_limits<int>::max();
    }
    else
    {
        return minimal + 1;
    }
    // 你可以画个图想想我们这个6 2 2 3的样例都走了几个dfs函数，然后你画个图，看看他们怎么从一个dfs走到另一个dfs的。
    //你把这个决策-状态树画出来。你就能很好地发现其中的重复求解部分了。
    //你们老师在讲最基础的递推和递归和动态规划的时候可能拿斐波那契数列举过例子，为什么求解斐波那契数列递推比递归时间复杂度低，你今晚好好想想
    //想通了你就会背包问题了。你也会动态规划了。
}
int main()
{
    cin >> total >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> coin[i];
    }
    cout << dfs(total) << endl;
}

static int find_min(const vector<int> &arr)
{
    if (arr.empty())
        throw invalid_argument("Input array is empty!");

    int min_number = numeric_limits<int>::max();
    for (auto it = arr.begin(); it != arr.end(); it++)
    {
        min_number = *it > min_number ? min_number : *it;
    }
    return min_number;
}
