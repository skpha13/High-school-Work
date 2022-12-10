#include <iostream>
#include <cstring>

using namespace std;

char s[256];
int i,v[256],mx=0,n,x;

int main()
{
    cin.getline(s,256);
    n=strlen(s);
    for(i=0;i<n;i++)
        if(s[i]>='a' && s[i]<='z')
        {
            x=s[i];
            v[x]++;
        }
    for(i=(int)'a';i<=(int)'z';i++)
        if(v[i]>mx)
            mx=v[i];
    for(i=(int)'a';i<=(int)'z';i++)
        if(v[i]==mx)
        {
            cout<<(char)i;
            break;
        }
    return 0;
}
