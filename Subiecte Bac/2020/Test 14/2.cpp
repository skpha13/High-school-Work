#include <iostream>
#include <cstring>

using namespace std;

char s[101];
int i;

int main()
{
    cin.getline(s,101);
    for(i=0;i<strlen(s)-1;i++)
    {
        if(s[i]=='-' && s[i+1]>='0' && s[i+1]<='9')
            strcpy(s+i,s+i+1);
    }
    cout<<s;
    return 0;
}