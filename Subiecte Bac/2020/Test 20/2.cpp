#include <iostream>
#include <cstring>

using namespace std;

char s[101];
int i;

int main()
{
    cin.getline(s,101);
    for(i=0;i<strlen(s)-1;i++)
        if(s[i]>='0' && s[i]<='9' && s[i+1]==',')
            strcpy(s+i+1,s+i+4);
    cout<<s;
    return 0;
}
