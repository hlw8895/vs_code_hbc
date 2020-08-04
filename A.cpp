#include <iostream>
using namespace std;
bool isleap(int year)
{
    if (year % 100 != 0 && year % 4 == 0 || year % 400 == 0)
        return true;
    else
        return false;
}
int main()
{
    int CASE_CNT;
    cin >> CASE_CNT;
    while (CASE_CNT--)
    {
        int year, mon, day, sum = 0;
        char c;
        cin >> year >> c >> mon >> c >> day;
        if (mon == 2 && day == 29)
            cout << "-1";
        else
        {
            if (mon >= 3)
                year++;
            for (int i = year; i <= year + 17; i++)
            {
                sum += isleap(i) ? 366 : 365;
            }
            cout << sum;
        }
        cout << endl;
    }
    return 0;
}
