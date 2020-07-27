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
        string str;
        cin >> str;
        while (str!="+")
        {
                num1 = en_zh[str] + num1 * 10;
                cin >> str;
        }
        cin >> str;
        while (str!="=")
        {
                num2 = en_zh[str] + num2 * 10;
                cin >> str;
        }
        if(num1==0&&num2==0)
            break;
        cout << num1 + num2 << endl;      
    }

    return 0;
}
