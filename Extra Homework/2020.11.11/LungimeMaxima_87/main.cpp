#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("lgmax.in");
ofstream g("lgmax.out");

char s[256],c[256];
int i,n,k,j,mx;

int main()
{
    f>>n;
    f.get();
    i=1;
    for(i=1;i<=n;i++)
    {
        f.getline(s,256);
        k=strlen(s);
        if(mx<k)
        {
            mx=k;
            strcpy(c,s);
        }
    }
    g<<c;
    return 0;
}
