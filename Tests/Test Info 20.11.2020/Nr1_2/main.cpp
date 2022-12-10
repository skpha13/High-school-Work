#include <iostream>
#include <cstring>

using namespace std;

char s[256],t[256],*p;
int i,ok;

int main()
{
    cin.getline(s,256);
    p=strtok(s," ");
    while(p)
    {
        if(strlen(p)%2!=0 && strlen(p)>=3)
        {
            i=p-s;
            p[strlen(p)/2]-=32;
            //strcpy(s+i+strlen(p)/2,s+i+strlen(p)/2+1);
        }
        strcat(t,p);
        strcat(t," ");
        p=strtok(NULL," ");
    }
    cout<<t;
    return 0;
}
