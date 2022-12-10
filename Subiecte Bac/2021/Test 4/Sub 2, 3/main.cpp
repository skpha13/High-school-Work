#include <iostream>
#include <cstring>

using namespace std;

int i;
char s[21],t[21];

int main()
{
    strcpy(s,"sanataTEA");
    cout<<strlen(s);
    i=0;
    while(i<strlen(s))
        if(s[i]=='a')
        {
            strcpy(t,s+i+1);
            strcpy(s+i,t);
        }
        else
            i+=1;
    cout<<s;
    return 0;
}
