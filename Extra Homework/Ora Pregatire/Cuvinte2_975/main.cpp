#include <iostream>
#include <cstring>

using namespace std;

char s[256],*p,sep[]=" ,.",v[256][11];
int i,n,mx=1,ok;

int palindrom(char s[])
{
    int j,k;
    j=strlen(s)-1;
    k=0;
    while(k<=strlen(s)/2)
    {
        j--;
        k++;
        if(s[j]!=s[k])
            return 0;
    }
    return 1;
}

int main()
{
    cin.getline(s,256);
    p=strtok(s,sep);
    while(p)
    {
        if(palindrom(p))
        {
            strcpy(v[++n],p);
            ok=1;
        }
        p=strtok(NULL,sep);
    }
    if(ok)
    {
        for(i=2;i<=n;i++)
            if(strcmp(v[mx],v[i])>0)
                mx=i;
        cout<<v[mx];
    }
    else
        cout<<"IMPOSIBIL";
    return 0;
}
