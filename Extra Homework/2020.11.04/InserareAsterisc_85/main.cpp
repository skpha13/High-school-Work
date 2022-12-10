#include <iostream>
#include <cstring>

using namespace std;

char s[202],v[]="aeiouAEIOU";
int i,j,ok;

int main()
{
    cin.getline(s,202);
    i=0;
    while(i<strlen(s))
        if(strchr(v,s[i]))
        {
            for(j=strlen(s)-1;j>=i+1;j--)
                s[j+1]=s[j];
            s[i+1]='*';
            i+=2;
            ok=1;
        }
        else
            i++;
    if(ok)
        cout<<s;
    else
        cout<<"FARA VOCALE";
    return 0;
}
