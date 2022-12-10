#include <iostream>
#include <cstring>

using namespace std;

char s[256],*p,sep[]=" ,.:;",v[256][21];
int n;

int palindrom(char s[])
{
    char c[21],a[21];
    int j,k;
    strcpy(a,s);
    strcpy(c,a);
    for(j=0;j<strlen(c);j++)
        if(c[j]>='A' && c[j]<='Z')
            c[j]+=32;
    j=strlen(s)-1;
    k=0;
    while(k<=strlen(c)/2)
    {
        j--;
        k++;
        if(c[j]!=c[k])
            return 0;
    }
    return 1;
}

void intr_palindrom(char s[])
{
    p=strtok(s,sep);
    while(p)
    {
        if(palindrom(p))
            strcpy(v[++n],p);
        p=strtok(NULL,sep);
    }
}

void parcurgere(char v[256][21])
{
    char t[21];
    int i,mx;
    mx=strlen(v[1]);
    for(i=2;i<=n;i++)
        if(mx<strlen(v[i]))
        {
            mx=strlen(v[i]);
            strcpy(t,v[i]);
        }
    cout<<t;
}

int main()
{
    cin.getline(s,151);
    intr_palindrom(s);
    parcurgere(v);
    return 0;
}
