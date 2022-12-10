#include <iostream>
#include <cstring>

using namespace std;

char s[21];
int i;

int main()
{
    cin.getline(s,21);
    while(i<strlen(s))
        if(strchr("aeiou",s[i]))
            strcpy(s+i,s+i+1);
        else
            i++;
    cout<<s;
    return 0;
}
