#include <iostream>
#include <cstring>

using namespace std;

char s[256];
int i,v[11],mx,k,x,ok=0;

int main()
{
    cin.getline(s,256);
    for(i=0;i<strlen(s);i++)
        if(s[i]>='0' && s[i]<='9')
        {
            x=s[i];
            v[x]++;
        }
    for(i=48;i<=57;i++)
        if(v[i]>mx)
        {
            mx=v[i];
            k=i;
            ok=1;
        }
    if(!ok)
        cout<<"NU";
        else
            cout<<(char)k;
    return 0;
}
