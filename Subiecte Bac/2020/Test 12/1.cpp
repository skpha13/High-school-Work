#include <iostream>

using namespace std;

int n;

int pDoi(int n);

int main()
{
    cout<<pDoi(20);
    return 0;
}

int pDoi(int n)
{
    int i=n,x,ok;
    if(n<=2)return n;
    while(i>=2)
    {
        ok=1;
        x=i;
        while(x>1 && ok)
        {
            if(x%2!=0)ok=0;
            x/=2;
        }
        if(ok)return i;
        i--;
    }
}