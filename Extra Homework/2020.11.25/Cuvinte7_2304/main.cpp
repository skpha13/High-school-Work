#include <iostream>
#include <cstring>

using namespace std;

char s[21][21],t[441],*p;
int i,n,k;

int main()
{
    cin>>n;
    cin.get();
    for(i=1;i<=n;i++)
        cin.getline(s[i],21);
    cin>>k;
    for(i=1;i<=n;i++)
        if(strlen(s[i])==k)
        {
            strcat(t,s[i]);
            strcat(t," ");
        }
    for(i=1;i<=n;i++)
        if(strlen(s[i])!=k)
        {
            strcat(t,s[i]);
            strcat(t," ");
        }
    cout<<t;
    return 0;
}
