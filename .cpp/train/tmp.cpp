#include <iostream>
#include <limits>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int K;
  while (cin >> K && K > 0)
  {
    bool first_not_set = true;
    int first_element;
    int last_element;
    bool sum_start_element_not_set = true;
    int sum_start_element;
    int curr_sum = 0;
    int max_sum = numeric_limits<int>::min();
    int curr;
    while (K--)
    {
      cin >> curr;
      if (first_not_set)
      {
        first_not_set = false;
        first_element = curr;
      }
      if (sum_start_element_not_set)
      {
        sum_start_element_not_set = false;
        sum_start_element = curr;
      }
      curr_sum += curr;
      if (curr_sum < 0)
      {
        curr_sum = 0;
        sum_start_element_not_set = true;
      }
      else if (curr_sum > max_sum)
      {
        first_element = sum_start_element;
        last_element = curr;
        max_sum = curr_sum;
      }
    }
    if (max_sum < 0)
    {
      max_sum = 0;
      last_element = curr;
    }
    cout << max_sum << ' ' << first_element << ' ' << last_element << endl;
  }
}
