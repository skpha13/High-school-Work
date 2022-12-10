#include <iostream>

using namespace std;

int cmmnr(int n)
{
    int c=0,v[10],i=0;
    for(i=0;i<10;i++)
        v[i]=-1;
    while(n)
    {
        v[n%10]=1;
        n/=10;
    }
    for(i=9;i>=0;i--)
        if(v[i]>-1)c=c*10+i;
    return c;
}

int main()
{
    int c;
    cout << c;
    return 0;
}
