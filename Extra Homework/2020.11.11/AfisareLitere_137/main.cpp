#include <iostream>
#include <cstring>

using namespace std;

char s[256];
int i,v[256];

int main()
{
    cin.getline(s,256);
    for(i=0;i<strlen(s);i++)
        if(s[i]>='a' && s[i]<='z' && !v[s[i]])
        {
            cout<<s[i]<<" ";
            v[s[i]]=1;
        }
    return 0;
}
