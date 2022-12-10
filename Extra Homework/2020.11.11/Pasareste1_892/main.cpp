#include <iostream>
#include <cstring>

using namespace std;

char s[256],t[256];
int i,j;

int main()
{
    cin.getline(s,256);
    strcpy(t,s);
    for(i=0;i<strlen(t);i++)
        if(strchr("aeiou",t[i]))
            strcpy(t+i+1,t+i+3);
    cout<<t;
    return 0;
}
