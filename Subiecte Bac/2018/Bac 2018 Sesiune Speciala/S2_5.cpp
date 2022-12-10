#include <iostream>
#include <cstring>

using namespace std;

char s[101],t[101],*p;

int main()
{
    cin.getline(s,101);
    p=strtok(s," ");
    while(p)
    {
        if(p[0]>='0' && p[0]<='9' && p[0]>t[0])
            strcpy(t,p);
        p=strtok(NULL," ");
    }
    if(t[0]!=0)
    {
        t[strlen(t)]=0;
        cout<<t;
    }
    else cout<<"nu exista";
    return 0;
}