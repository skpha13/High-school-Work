#include <iostream>
#include <cstring>

using namespace std;

char s[256],c[32],t[256],*p;
int i,ok,k,v;

int main()
{
    cin.getline(c,32);
    cin.getline(s,256);
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
        cout<<"NU APARE";
    else
        cout<<s;
    return 0;
}
