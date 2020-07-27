#include<iostream>
using namespace std;
int main()
{
    while(true)
    {  
        int A,B,k;
        bool unequal=false;
        cin>>A>>B>>k;
        int A1=A,B1=B;
        if(A==0&&B==0) 
            break;
        while(k--)
        {
            int end1=A%10;
            int end2=B%10;
            if(end1!=end2)
            {
                unequal=true;
               // cout<<A+B<<endl;
                break;
            }
            A/=10;
            B/=10;
        }
        if(!unequal)
       cout<<"-1\n";
       else
           cout << A1 + B1 << endl;
    }
}
