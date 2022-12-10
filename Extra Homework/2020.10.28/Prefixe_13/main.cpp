#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[11];
    int i,n,j;
    cin.getline(s,11);
    n=strlen(s);
    cout<<s;
    for(i=n-1;i>=0;i--)
    {
        cout<<endl;
        for(j=0;j<=i-1;j++)
            cout<<s[j];
    }
    cout<<s;
    for(i=0;i<n;i++)
    {
        cout<<endl;
        for(j=i+1;j<n;j++)
            cout<<s[j];
    }
    return 0;
}
