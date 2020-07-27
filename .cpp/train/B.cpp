#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int long long sum = 0, A = 0, max1 = 0;
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> A;
            sum += A;
            max1 = max(max1, A);
        }
        if ((sum - max1 - max1) >= -1)
            cout << "YES";
        else
            cout << "NO";

        cout << endl;
    }
    return 0;
}
