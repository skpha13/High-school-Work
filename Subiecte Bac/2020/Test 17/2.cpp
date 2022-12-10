#include <iostream>
#include <cstring>

using namespace std;

char s[101],t[501],*p;

int i,ok;

int main()
{
    cin.getline(s,101);
    p=strtok(s," ");
    while(p)
    {
        ok=1;
        for(i=0;i<strlen(p);i++)
            if(!strchr("aeiou",p[i])) ok=0;
        if(ok)
        {
            strcat(t,p);
            strcat(t," ");
            strcat(t,p);
            strcat(t," ");
        }
        else
            {
                strcat(t,p);
                strcat(t," ");
            }
        p=strtok(NULL," ");
    }
    cout<<t;
    return 0;
}