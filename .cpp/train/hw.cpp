#include<iostream>
#include<array>
using namespace std;
int main()
{
    // 我想要的是全排列。。。不是A(10, 2)，是A(M, N)。写算法要写的通用一些。
    // 不过按照你这个思路我们是可以写出一个递归算法的。
    // 递归写组合应该更简单一些，递归写排列反而还要麻烦一些
    array<int, 10> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 9;++i)
    {
        for (int j = i + 1; j < 10;++j)
            cout << arr[i] << "," << arr[j] <<endl;
    }
    //我看看啥叫全排列
}
