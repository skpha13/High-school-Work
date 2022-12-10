#include <iostream>
#include <cstring>

using namespace std;

char s[256];
int i,n;

int main()
{
    cin.getline(s,256);
    n=strlen(s);
    while(n>2)
    {
        strcpy(s,s+1);
        strcpy(s+strlen(s)-1,s+strlen(s));
        cout<<s<<endl;
        n-=2;
    }
    return 0;
}
