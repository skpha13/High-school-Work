#include <iostream>
#include <cstring>

using namespace std;

char s[500],*p,sep[]=" ",t[500];
int i;

int main()
{
    cin.getline(s,500);
    p=strtok(s,sep);
    while(p)
    {
        cout<<p<<" ";
        strcpy(t,p);
        for(i=strlen(t)-1;i>=0;i--)
            cout<<t[i];
        cout<<" ";
        p=strtok(NULL,sep);
    }
    return 0;
}
