#include <iostream>
#include <fstream>

using namespace std;

ifstream f("subnumar.in");
ofstream g("subnumar.out");

int n,x,i,v[100],mx;

int main()
{
    while(f>>x)
        while(x>=10)
        {
            v[x%100]++;
            x/=10;
        }
    for(i=99;i>=10;i--)
        if(mx<v[i])
            mx=v[i];
    for(i=99;i>=10;i--)
        if(v[i]==mx)
            g<<i<<" ";
    return 0;
}
