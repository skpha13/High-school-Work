#include <iostream>
#include <cstring>

using namespace std;

char s[151],*p,sep[]=" ";

int verificare(char *p)
{
    char t[151];
    strcpy(t,p);
    if(strchr("aeiouAEIOU",t[0]) && strchr("aeiouAEIOU",t[strlen(t)-1]))
        return 1;
    return 0;
}

void parcurgere(char s[])
{
    int k=0;
    p=strtok(s,sep);
    while(p)
    {
        if(verificare(p))
            k++;
        p=strtok(NULL,sep);
    }
    cout<<k;
}
int main()
{
    cin.getline(s,151);
    parcurgere(s);
    return 0;
}
