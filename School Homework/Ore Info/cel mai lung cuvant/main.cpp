#include <iostream>
#include <cstring>

using namespace std;

char s[256],*p,sep[]=" ",*mx;
int i,k;

int main()
{
    cin.getline(s,256);
    p=strtok(s,sep);
    mx=p;
    while(p)
    {
        if(strlen(mx)<strlen(p))
            strcpy(mx,p);
        p=strtok(NULL,sep);
    }
    cout<<mx;
    return 0;
}
