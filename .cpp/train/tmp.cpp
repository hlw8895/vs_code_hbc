// N
// a0 a1 a2 a3 a4 ... aN
// 输出第i位不大于ai的所有的N位数，把0当作有效数字
//
// Sample input:
// 2
// 2 3
//
// Sample output:
// 00
// 01
// 02
// 03
// ...
#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>
using namespace std;
vector<int> nums;
int N;
void dfs(int n, string s = {})
{
  if (n == N)
  {
    cout << s << endl;
    return;
  }
  for (int i = 0; i <= nums[n]; i++)
    dfs(n + 1, s + char(i + '0'));
}
int main()
{
  int temp;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> temp;
    nums.push_back(temp);
  }

  dfs(0);
  return 0;
}
