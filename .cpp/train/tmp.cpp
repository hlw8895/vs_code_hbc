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
#include <limits>
#include <array>
using namespace std;

void f(int num)
{
  if(num>=0)
  {
    cout << num<<" ";
    f(--num);
  }

}
int main()
{
  array<int, 10000> arr = {};
  int n;
  int n1 = 2, n2 = 3;
  cout << f(n1) + f(n2) * 10;

  return 0;
}
