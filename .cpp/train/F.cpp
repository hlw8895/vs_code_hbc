#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    int n,num,sum,res;
    cin >> n;

    res = num[0];
    for (int i = 0; i < n; i++)
    {

        sum = sum < 0 ? 0 : sum;
        res = max(res, sum + num[i]);
    }
       
        return 0;
}
