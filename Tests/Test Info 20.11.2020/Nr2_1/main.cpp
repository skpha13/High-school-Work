#include <iostream>
#include <cstring>

using namespace std;

char s[256],c[256],*p,sep[]=" ";

int main()
{
    cin.getline(s,256);
    p=strtok(s,sep);
    while(p)
    {
        strcpy(c,p);
        if(c[0]>='0' && c[0]<='9')
            cout<<p<<" ";
        p=strtok(NULL,sep);
    }
    return 0;
}
