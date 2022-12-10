#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("paritatesiruri.in");
ofstream g("paritatesiruri.out");

char s[10001],t[10001];
int i,k;

int main()
{
    f>>k;
    f.get();
    while(f.getline(s,10001))
    {
        for(i=0;i<strlen(s);i++)
            if(i%2!=0)
                g<<s[i];
        g<<" ";
        for(i=0;i<strlen(s);i++)
            if(i%2==0)
                g<<s[i];
        g<<endl;
    }
    return 0;
}
