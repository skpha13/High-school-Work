#include <iostream>
#include <cstring>

using namespace std;

char s[21][21];
int n,ok,i;

int main()
{
    cin>>n;
    for(i=0;i<n;i++)
        cin>>s[i];
    for(i=0;i<n-1;i++)
        if(strstr(s[i],s[n-1])==s[i])
        {
            cout<<s[i]<<" ";
            ok=1;
        }
    if(!ok)cout<<"nu exista";
    return 0;
}