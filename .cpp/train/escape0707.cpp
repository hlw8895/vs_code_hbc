#include <iostream>
#include <string>
#include <iterator>
#include <vector>

using namespace std;

#define endl '\n'
static auto speedup = []() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  return nullptr;
}();
static int N;
static vector<int> A;

static void dfs(int index, string curr = {})
{
  if (index == N)
  {
    cout << curr << endl;
    return;
  }

  for (int digit = 0; digit <= A[index]; ++digit)
  {
    string extended = curr + static_cast<char>(digit + '0');
    dfs(index + 1, extended);
  }
}

int main()
{
  cin >> N;
  copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(A));
  dfs(0);
  return 0;
}
