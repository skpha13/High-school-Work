#include <iostream>
#include <cstring>

using namespace std;

char s[101],v[101][101],t[101],*p;
int n,i,j;

int main()
{
    cin.getline(s,101);
    p=strtok(s," ");
    while(p)
    {
        strcpy(v[++n],p);
        p=strtok(NULL," ");
    }
    for(i=1;i<n;i++)
    {
        if(strlen(v[i])%2)
        {
            strcpy(t,v[i]+strlen(v[i])/2);
            strcpy(v[i]+strlen(v[i])/2+1,t);
        }
        for(j=i+1;j<=n;j++)
            if(strcmp(v[i],v[j])==0)
            {
                cout<<"DA";
                return 0;
            }
    }
    cout<<"NU";
    return 0;
}   