#include <iostream>
#include <cstring>

using namespace std;

char s[101];

int verificare(char s[])
{
    int i,ok=0;
    for(i=0;i<strlen(s);i++)
        if(s[i]!='i')
            ok=1;
    if(ok==0)
        return 0;
    for(i=0;i<strlen(s);i++)
        if(strchr("aeou",s[i]))
            return 0;
    return 1;
}

int main()
{
    cin.getline(s,101);
    if(verificare(s))
        cout<<"DA";
    else
        cout<<"NU";
    return 0;
}
