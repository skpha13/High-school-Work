#include <iostream>
#include <cstring>

using namespace std;

char s[256],s1[256];
int i,j;

int main()
{
    cin.getline(s,256);
    cin.getline(s1,256);
    for(i=0;i<strlen(s)-1;i++)
        for(j=i+1;j<strlen(s);j++)
            if(s[i]>s[j])swap(s[i],s[j]);
    for(i=0;i<strlen(s1)-1;i++)
        for(j=i+1;j<strlen(s1);j++)
            if(s1[i]>s1[j])swap(s1[i],s1[j]);
    if(strcmp(s,s1)==0)
        cout<<"sunt anagrame";
    else
        cout<<"nu sunt anagrame";
    return 0;
}
