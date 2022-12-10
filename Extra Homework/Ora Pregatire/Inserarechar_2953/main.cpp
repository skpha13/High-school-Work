#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("inserarechar.in");
ofstream g("inserarechar.out");

char s[750],c[64],t[750],*p;
int i,ok,k,v;

int main()
{
    f.getline(c,32);
    f.getline(s,500);
    strcpy(t,s);
    p=strtok(t," ");
    while(p)
    {
        if(strcmp(c,p)==0)
        {
            k=p-t+strlen(p)+v;
            for(i=strlen(s)-1;i>=k;i--)
                s[i+1]=s[i];
            v++;
            s[i+1]='?';
            ok=1;
        }
        p=strtok(NULL," ");
    }
    if(!ok)
        g<<"NU APARE";
    else
        g<<s;
    return 0;
}
