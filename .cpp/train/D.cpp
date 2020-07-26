#include<iostream>
using namespace std;
int main()
{
    while(true)
    {  
        int A,B,k;
        bool is_use;
        cin>>A>>B>>k;
        if(A==0&&B==0) 
            break;
        while(k--)
        {
            int end1=A%10;
            int end2=B%10;
            if(end1!=end2)
            {
                is_use=true;
               // cout<<A+B<<endl;
                break;
            }
            A/=10;
            B/=10;
        }
        if(!is_use)
       cout<<"-1\n";
       else
           cout << A + B << endl;
    }
    
}
