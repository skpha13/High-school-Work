#include <iostream>
#include <cstring>

using namespace std;

char s[101];
int k,i;

int main()
{
    cin.getline(s,101);
    for(i=0;i<strlen(s);i++)
        if(strchr("aeiou",s[i])) k=i;
    if(k)
    {
        strcpy(s+k,s+k+1);
        cout<<s;
    }
    else
        cout<<"nu exista";
    return 0;
}