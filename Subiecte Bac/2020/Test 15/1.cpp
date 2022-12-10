#include <iostream>

using namespace std;

int n,p;

void divPrimMax(int n,int &p)
{
    int f=2;
    while(n>1)
    {
        while(n%f==0)
        {
            n/=f;
            p=f;
        }
        f++;
    }
}

int main()
{
    cin>>n;
    divPrimMax(n,p);
    cout<<p;
    return 0;
}