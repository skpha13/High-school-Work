#include <iostream>
#include <cstring>

using namespace std;

char s[11],v[21][11];
int n,k,i,j,c,m;

int main()
{
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>s;
        m=strlen(s)-1;
        if(strchr("aeiou",s[m]))
            strcpy(v[++c],s);
    }
    if(c>=k)
       for(j=1;j<=k;j++)
            cout<<v[j]<<endl;
    else
        cout<<"nu exista";
    return 0;
}
