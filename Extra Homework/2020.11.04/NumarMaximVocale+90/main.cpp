#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("vocmax.in");
ofstream g("vocmax.out");

char s[251],c[251];
int i,n,j,v[101],mx,k;

int main()
{
    f>>n;
    i=1;
    f.get();
    while(i<=n)
    {
        f.getline(s,251);
        k=0;
        for(j=0;j<strlen(s);j++)
            if(strchr("aeiou",s[j]))
                k++;
        if(mx<k)
        {
            mx=k;
            strcpy(c,s);
        }
        i++;
    }
    g<<c;
    return 0;
}
