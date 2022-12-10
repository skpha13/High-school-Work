#include <iostream>
#include <cstring>

using namespace std;

char s[256],*p,sep[]=" ",t[256];
int i,ok;

int main()
{
    cin.getline(s,256);
    p=strtok(s,sep);
    while(p)
    {
        ok=1;
        strcpy(t,p);
        for(i=0;i<strlen(t);i++)
            if(!strchr("aeiou",t[i]))
                ok=0;
        if(ok)
            cout<<p<<endl;
        p=strtok(NULL,sep);
    }
    return 0;
}
