#include <iostream>
#include <cstring>

using namespace std;

char s[101],c[101],t[101];
int i,k;

int main()
{
    cin.getline(s,101);
    cin.getline(c,101);
    if(strlen(s)==strlen(c))
    {
        for(i=strlen(s)-1;i>0;i--)
            if(c[i]%2==0)
                t[k++]=s[i];
        t[k++]=s[0];
        for(i=1;i<strlen(s);i++)
            if(c[i]%2!=0)
                t[k++]=s[i];
        t[strlen(t)]=0;
        cout<<t;
    } 
    else cout<<"cod incorect";
    return 0;
}