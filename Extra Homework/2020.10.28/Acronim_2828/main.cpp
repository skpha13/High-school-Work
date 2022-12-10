#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[102];
    int n,i;
    cin.getline(s,102);
    n=strlen(s);
    for(i=0;i<n;i++)
        if((s[i]<='Z' && s[i]>='A') && (s[i-1]==' ' || i==0))
            cout<<s[i];
    return 0;
}
