#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    int n,num,sum,max_add;
    cin >> n;
    while(n)
    {
        for (int i = 0; i < n; i++)
        

            for (int i = 0; i < n; i++)
            {
                cin >> num;
                sum = sum < 0 ? num : sum + num;
                max_add = max(max_add, sum);
            }

    }   
        return 0;
}
