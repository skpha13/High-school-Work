#include <iostream>

using namespace std;

int n;

int suma(int n)
{
    int i,ok,s=0,j;
    for(i=2;i<=n;i++)
        if(n%i==0)
        {
            ok=1;
            for(j=2;j*j<=i;j++)
                if(i%j==0)
                {
                    ok=0;
                    break;
                }
            if(ok==1)s+=i;
        }
    return s;
}

int main()
{
    cout<<suma(12);
    return 0;
}