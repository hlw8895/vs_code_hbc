#include<iostream>
#include<vector>
#include<algorithm>
#include <utility>
#include<string>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        vector<pair<string, string>> id_time;
        int tt;
        cin >> tt;
        while(tt--)
        {
            string id, in_time, out_time;
            cin >> id >> in_time >> out_time;
            id_time.emplace_back(in_time, id);
            id_time.emplace_back(out_time, id);
        }
        sort(id_time.begin(), id_time.end());
        cout << id_time.front().second << " " << id_time.back().second << endl;
        
    }
    return 0;
}
