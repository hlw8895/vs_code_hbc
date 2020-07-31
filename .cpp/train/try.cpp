#include <bits/stdc++.h>
using namespace std;
int count = 0;
int total;
int n, m;
array<int, 21> coin = {};

// 现在自己试一下这个程序的正确性，例子和提交都可以试，看你
// 复杂度是多少？每次函数调用都会用栈空间的，你就当作每个函数都会开一个局部变量吧。
// 递归几层就占用了多少空间
// 不对，那是时间复杂度的算法，你算空间复杂度的时候，这一层的i++之前，你的下一层函数已经返回了，所以不会横向占用更多空间，只是跟深度有关。你实在是应该自己写对一个递归函数，然后自己调试一下感受一下。
// 就把这个题写对就行
// 复杂度以后再说吧，自己仔细想想，画画图想想。
// 我没看到你的终端

// 自己找出来这个问题
int dfs(int total)
{
    if (total == 0)
        return 0;

    int minimal = numeric_limits<int>::max();
    for (int i = 0; i < m; i++)
    {
        int current_coin = coin[i];
        minimal = min(minimal, dfs(total - current_coin));
    }
    return minimal + 1;
}
int main()
{
    cin >> total >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> coin[i];
    }
    cout << dfs(total) << endl;  // 不要忘了
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

// 现在你来说一下吧，从头说一下。find_min就不用管了
