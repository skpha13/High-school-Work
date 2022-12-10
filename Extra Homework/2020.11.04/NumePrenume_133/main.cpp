#include <iostream>
#include <cstring>

using namespace std;

char n[21],p[21],s[42];
int i,k;

int main()
{
    cin>>n>>p;
    for(i=0;i<strlen(p);i++)
        if(!strchr("aeiouAEIOU",p[i]))
            s[k++]=p[i];
    s[k++]=' ';
    strcat(s,n);
    cout<<s;
    return 0;
}
