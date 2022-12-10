#include <iostream>
#include <cstring>

using namespace std;

char s[101],t[101],*p;
int n;

int main()
{
    cin>>n;
    cin.get();
    cin.getline(s,101);
    strcpy(t,s);
    p=strtok(s," ");
    while(p)
    {
        if(strlen(p) >= n) cout<<p<<" ";
        p=strtok(NULL," ");
    }
    p=strtok(t," ");
    while(p)
    {
        if(strlen(p) < n) cout<<p<<" ";
        p=strtok(NULL," ");
    }        
    return 0;
}