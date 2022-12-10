#include <iostream>
#include <cstring>

using namespace std;

char s1[21],s2[21];

void ordonare(char s[])
{
    int i,j;
    for(i=0;i<strlen(s)-1;i++)
        for(j=i+1;j<strlen(s);j++)
            if(s[i]>s[j])swap(s[i],s[j]);
}

int anagrame(char s1[],char s2[])
{
    if(strlen(s1)!=strlen(s2))return 0;
    ordonare(s1);
    ordonare(s2);
    if(strcmp(s1,s2))return 0;
    return 1;
}

int main()
{
    cin>>s1>>s2;
    cout<<anagrame(s1,s2);
    return 0;
}
