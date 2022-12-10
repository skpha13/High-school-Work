#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("capslock.in");
ofstream g("capslock.out");

char s[256];

void parcurgere(char s[])
{
    int i,j;
    for(i=0;i<strlen(s);i++)
        if(s[i]=='#')
        {
            j=i+1;
            while(s[j]!='#' && j<strlen(s))
            {
                if(s[j]!=' ')
                    s[j]-=32;
                j++;
            }
            i=j;
        }
    for(i=0;i<strlen(s);i++)
        if(s[i]!='#')
            g<<s[i];
}

int main()
{
    f.getline(s,256);
    parcurgere(s);
    return 0;
}
