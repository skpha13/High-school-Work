#include <iostream>
#include <cstring>

using namespace std;

char s[]="bbaacddee";

int main()
{
    int i=strlen(s)-1;
    while(i>0)
    {
        if(s[i]==s[i-1])
            s[i]=s[i-1];
        i--;
    }
    cout<<s;
    return 0;
}