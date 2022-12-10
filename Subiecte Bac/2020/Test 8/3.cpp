#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.in");

int x,a[10],v[10],i,n,mx;

int main()
{
    while(f>>x)
    {
        n++;
        a[x%10]=n;
        v[x%10]++;
        if(v[x%10]>mx) mx=v[x%10];
    }
    for(i=0;i<=9;i++)
        if(v[i]==mx)
            cout<<a[i]<<" ";
    f.close();
    return 0;
}