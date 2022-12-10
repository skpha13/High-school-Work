#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.in");

int v[10],i,x,c[10],mx;

int main()
{
    while(f>>x)
    {
        i++;
        x/=10;
        v[x%10]++;
        c[x%10]=i;
    }
    for(i=0;i<=9;i++)
        if(mx<v[i])mx=v[i];
    for(i=0;i<=9;i++)
        if(mx==v[i])
            cout<<c[i]<<" ";
    return 0;
}
