#include <iostream>
#include <cstring>

using namespace std;

char s[101],*p;
int i,v,nr;

int main()
{
    cin.getline(s,101);
    p=strtok(s," ");
    while(p)
    {
        v=0;
        for(i=0;i<strlen(p);i++)
            if(strchr("aeiou",p[i]))v++;
        if(v==strlen(p)-v)nr++;
        p=strtok(NULL," ");
    }
    cout<<nr;
    return 0;
}