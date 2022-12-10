#include <iostream>

using namespace std;

int putere(int n);

int main()
{
    cout<<putere(880);
    return 0;
}
int putere(int n)
{
    int f=2,p,mn=1000,d=2;
    while(n>1)
    {
        p=0;
        while(n%f==0)
        {
            n/=f;
            p++;
        }
        if(p>0 && mn>p)
        {
            mn=p;
            d=f;
        }
        f++;
    }   
    return d;
}