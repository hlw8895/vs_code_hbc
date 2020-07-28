#include<iostream>
#include<array>
using namespace std;
int main()
{
    int n;
    cin >>n;
    while(n)
    {
        array<int, 1000> score{};
        int mark,count=0;
        for (int i = 0; i < n;i++)
            cin >> score[i];
        cin >> mark;
        for (int i = 0; i < n;i++)
        {
            if (mark == score[i])
                count++;
        }
        cout << count << endl;
        cin >> n;
    }

    return 0;
}
