#include <iostream>
#include <cstring>

using namespace std;

char s[256],x;
int i;

int main()
{
    cin.getline(s,256);
    x=s[0];
    while(i<strlen(s))
    {
        if(s[i]==x)
            strcpy(s+i,s+i+1);
        i++;
    }
    cout<<s;
    return 0;
}
