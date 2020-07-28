#include<iostream>
#include<algorithm>
#include<array>
using namespace std;
int main()
{

    int n;
    array<int, 10000> nums{};
    cin >> n;
    for (int i = 0; i < n;i++)
        cin >> nums[i];
    int res = nums[0], sum = 0;
    for (int i = 0; i < n; i++)
    {
        
        sum = sum < 0 ? 0 : sum;
        res = max(res, sum + nums[i]);
        sum += nums[i];
        }
        res=res > 0 ? res : 0;
        cout <<res << endl;

       
        return 0;
}
