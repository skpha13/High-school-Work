#include <iostream>
#include <cstring>

using namespace std;

char s[11],v[]="aeiouAEIOU";
int i,p,u,ok,ot;

int main()
{
    cin.getline(s,11);
    for(i=0;i<strlen(s);i++)
        if(strchr(v,s[i]))
        {
            p=i;
            ok=1;
            break;
        }
    for(i=0;i<strlen(s);i++)
        if(!strchr(v,s[i]))
        {
            u=i;
            ot=1;
        }
    swap(s[p],s[u]);
    if(ok && ot)
        cout<<s;
    else
        cout<<"IMPOSIBIL";
    return 0;
}
