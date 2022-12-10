#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[256];
    int n,i,k=0;
    cin.getline(s,256);
    n=strlen(s);
    for(i=1;i<n-1;i++)
        if(strchr("aeiou",s[i]) && !strchr("aeiou ",s[i-1]) && !strchr("aeiou ",s[i+1]))
            k++;
    cout<<k;
    return 0;
}
