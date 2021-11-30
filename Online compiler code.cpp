#include <iostream>
using namespace std;
int main()
{
    long int i,n,a,b,c,waste;
    cout<<"Enter the limit:";
    cin>>n;
    for(i=0; i<=n; i++)
    {
        a=(i*i)+1;
        b=(i*i)-1;
        c=2*i;
        
        if(a >= b+c || b >= a+c || c >= a+b)
        {
            waste=2;
        }
        else
        {
            if(a>b && a>c)
            {
                if(a*a == b*b+c*c)
                {
                    cout<<"\n"<<a<<","<<b<<","<<c;
                }
                else
                {
                    waste=4;
                }
            }
            else if(b>a && b>c)
            {
                if(b*b == a*a+c*c)
                {
                    cout<<"\n"<<a<<","<<b<<","<<c;
                }
                else
                {
                    waste=6;
                }
            }
            else
            {
                if(c*c == b*b+a*a)
                {
                    cout<<"\n"<<a<<","<<b<<","<<c;
                }
                else
                {
                    waste=5;
                }
            }
        }
    }
    cout<<"\n"<<"Program expiring code:"<<waste;
    return 0;
}
