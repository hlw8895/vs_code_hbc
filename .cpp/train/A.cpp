#include<iostream>
using namespace std;
bool isleap(int x)
{
    if(x%100!=0&&x%4==0||x%400==0)
    return true;
    else return false;   
}
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int year,mon,day,sum=0;
        char c;
        cin>>year>>c>>mon>>c>>day;
        if(mon==2&&day==29)       
            cout<<"-1";           
        else
        {
            if(mon>=3)  year++;
            for(int i=year;i<=year+17;i++)
            {
                sum+=isleap(i)?366:365;
            }

            cout<<sum;  
        }         
    }
    return 0;
}