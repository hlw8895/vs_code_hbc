#include <iostream>
#include <algorithm>
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
    int n = 1, head, foot, max_first;
    array<int, 10000> nums = {};
    while (true)
    {
        cin >> n;
        if (n == 0)
            break;

        for (int i = 0; i < n; i++)
            cin >> nums[i];
        head = nums[0], max_first = nums[0];
        int res = INT_MIN, sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            if (sum < 0)
            {
                sum = max(sum, 0);
                max_first = nums[i + 1];
            }
            else if (sum > res)
            {
                head = max_first;
                res = sum;
                foot = nums[i];
            }
        }
        if (res < 0)
        {
            res = 0;
            foot = nums[n - 1];
        }
        cout << res << " " << head << " " << foot << endl;
    }
    return 0;
}
