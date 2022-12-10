#include <iostream>
#include <cstring>

using namespace std;

char s[256],*p,sep[]=" ",v[256][11];
int i,n,mx=1,ok;

int numar(char s[])
{
    char t[256];
    strcpy(t,p);
    if(t[0]>='0' && t[0]<='9')
        return 1;
    return 0;
}

int main()
{
    cin.getline(s,256);
    p=strtok(s,sep);
    while(p)
    {
        if(numar(p))
        {
            strcpy(v[++n],p);
            ok=1;
        }
        p=strtok(NULL,sep);
    }
    if(ok)
    {
        for(i=2;i<=n;i++)
            if(strcmp(v[mx],v[i])<0)
                mx=i;
        cout<<v[mx];
    }
    else
        cout<<"nu exista";
    return 0;
}
