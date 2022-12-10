#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("sortcuv.in");
ofstream g("sortcuv.out");

char s[251],*p,sep[]=" ",v[251][21];
int i,n;

void cuv(char s[])
{
    p=strtok(s,sep);
    while(p)
    {
        strcpy(v[++n],p);
        p=strtok(NULL,sep);
    }
}

void ordonare(char v[251][21])
{
    int i,j;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
            if(strcmp(v[i],v[j])>0)
                swap(v[i],v[j]);
}

void afisare(char v[251][21])
{
    for(i=1;i<=n;i++)
        g<<v[i]<<endl;
}

int main()
{
    f.getline(s,256);
    cuv(s);
    ordonare(v);
    afisare(v);
    return 0;
}
