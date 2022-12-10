#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("palindrom.in");
ofstream g("palindrom.out");

int main()
{
    char s[22];
    int n,i,j,k,m,ok;
    f>>n;
    f.get();
    i=1;
    while(i<=n)
    {
        f.getline(s,22);
        m=strlen(s);
        ok=1;
        j=m-1;
        k=0;
        while(k<=m/2)
        {
            j--;
            k++;
            if(s[j]!=s[k])
                ok=0;
        }
        if(ok)
            g<<1<<endl;
            else
                g<<0<<endl;
        i++;
    }
    return 0;
}
