#include <iostream>
#include <cstring>

using namespace std;

char s[256],t[256];
int i,j;

int main()
{
    cin.getline(s,256);
    strcpy(t,s);
    while(i<strlen(t))
        if(strchr("aeiou",t[i]))
        {
            for(j=strlen(t)-1;j>=i+1;j--)
                t[j+1]=t[j];
            for(j=strlen(t)-1;j>=i+1;j--)
                t[j+1]=t[j];
            t[i+1]='p';
            t[i+2]=t[i];
            i+=3;
        }
        else
            i++;
    cout<<t;
    return 0;
}
