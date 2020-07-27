#include <iostream>
#include<string>
#include <map>
using namespace std;
int main()
{
    map<string, int> en_zh = {{"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}, {"zero", 0}};
    while (1)
    {
        int num1 = 0, num2 = 0;
        while (1)
        {
            string A;
            cin >> A;
            if (A != "+")
                num1 = en_zh.at(A) + num1 * 10;
            else
                break;
        }
        while (1)
        {
            string A;
            cin >> A;
            if(A!="=")
                num2 = en_zh.at(A) + num2 * 10;
            else
                break;
        }
        if(num1==0&&num2==0)
            break;
        cout << num1 + num2 << endl;
       
    }

    return 0;
}
