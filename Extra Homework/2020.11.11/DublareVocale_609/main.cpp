#include <iostream>
#include <cstring>

using namespace std;

char s[256];
int i,j;

int main()
{
    cin.getline(s,256);
    while(i<strlen(s))
        if(strchr("aeiou",s[i]))
        {
            for(j=strlen(s)-1;j>=i+1;j--)
                s[j+1]=s[j];
            s[i+1]=s[i];
            i+=2;
        }
        else
            i++;
    cout<<s;
    return 0;
}
