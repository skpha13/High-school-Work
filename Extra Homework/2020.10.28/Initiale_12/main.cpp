#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[256];
    int i,n;
    cin.getline(s,256);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if((s[i]>='a' && s[i]<='z') && (s[i+1]==' ' || i==n-1))
            s[i]-=32;
        if((s[i]>='a' && s[i]<='z') && (s[i-1]==' ' || i==0))
            s[i]-=32;
    }
    cout<<s;
    return 0;
}
