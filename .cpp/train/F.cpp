#include <iostream>
#include <algorithm>
#include <limits>
#include <array>
using namespace std;

#define endl '\n'
static auto speedup = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

int main()
{
    int n, head_index, foot_index, max_first;
    array<int, 9999> nums = {};

    while (cin >> n && n > 0)
    {
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        head_index = 0, max_first = 0;
        int res = numeric_limits<int>::min(), sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            if (sum < 0)
            {
                sum = 0;
                max_first = i + 1;
            }
            else if (sum > res)
            {
                res = sum;
                head_index = max_first;
                foot_index = i;
            }
        }
        if (res < 0)
        {
            res = 0;
            foot_index = n - 1;
        }
        cout << res << ' ' << nums[head_index] << ' ' << nums[foot_index] << endl;
    }
    return 0;
}
