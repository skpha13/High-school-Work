#include <iostream>
#include <cstring>

using namespace std;

char s[256];
int i,k;

int main()
{
    cin.getline(s,256);
    for(i=0;i<strlen(s)-1;i++)
        if(strchr("aeiou",s[i]) && strchr("aeiou",s[i+1]))
            k++;
    cout<<k;
    return 0;
}
