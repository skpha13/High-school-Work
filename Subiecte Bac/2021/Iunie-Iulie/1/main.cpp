#include <iostream>

using namespace std;

int n,s;

void divPrim(int n,int &s)
{
    int f=2,p;
    s=0;
    while(n>1)
    {
        p=0;
        while(n%f==0)
        {
            n/=f;
            p++;
        }
        if(p%2!=0)
            s+=f;
        f++;
    }
}

int main()
{
    cin>>n;
    divPrim(n,s);
    cout<<s;
    return 0;
}
