#include <iostream>
#include <cstring>

using namespace std;

char s[31],c[31];
int i;

int main()
{
    cin>>s>>c;
    for(i=0;i<strlen(s);i++)
        if(strchr("aeiou",s[i]) && strchr("aeiou",c[i]))
            cout<<'*';
        else
            if(!strchr("aeiou",s[i]) && !strchr("aeiou",c[i]))
                cout<<'#';
        else
            cout<<'?';
    return 0;
}
