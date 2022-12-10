#include <iostream>
#include <cstring>

using namespace std;

char s[101],*p;
int i;

int main()
{
    cin.getline(s,101);
    p=strtok(s," ");
    while(p)
    {   
        if(p[0]>='a' && p[0]<='z')p[0]-=32;
        for(i=1;i<strlen(p);i++)
            if(p[i]>='A' && p[i]<='Z')
                p[i]+=32;
        cout<<p<<" ";
        p=strtok(NULL," ");
    }
    return 0;
}