#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[22],t[5]="ab",p[5]="ab";
    int n,i;
    cin.getline(s,22);
    n=strlen(s);
    for(i=0;i<n;i++)
        if(strchr("aeiou",s[i]))
            s[i]-=32;
    cout<<s;
    return 0;
}
