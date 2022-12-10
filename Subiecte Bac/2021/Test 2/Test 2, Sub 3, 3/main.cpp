#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.in");

int i,j,n,x,ok;

int main()
{
    while(f>>x)
    {
        n++;
        if(x>0 && !ok)
        {
            i=n;
            ok=1;
        }
        if(x>0)
            j=n;
    }
    if(n-i>j)
        cout<<n-i+1;
    else
        cout<<j;
    return 0;
}
