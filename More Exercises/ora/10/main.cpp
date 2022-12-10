#include <iostream>
#include <cstring>

using namespace std;

char s[256],t[256],*p,*u,c[256],v[256];
int i,j,ok=1;

int main()
{
    cin.getline(s,256);
    cin.getline(t,256);
    p=strtok(s,"aeiou");
    u=strtok(t,"aeiou");
    cout<<s<<" "<<t<<endl;
    while(p)
    {
        strcpy(c,p);
        p=strtok(NULL,"aeiou");
    }
    while(u)
    {
        strcpy(v,u);
        u=strtok(NULL,"aeiou");
    }
    if(strcmp(c,v)==0)cout<<"Rimeaza";
    else
        cout<<"Nu Rimeaza";
    cout<<c<<" "<<v;
    /*i=strlen(s)-1;
    j=strlen(t)-1;
    while(i>=0 && j>=0 && strchr("aeiou",s[i-1]) && strchr("aeiou",t[j-1]))
    {
        if(s[i]!=t[j])
        {
            ok=0;
            break;
        }
        i--;
        j--;
    }
    if(ok)cout<<"Rimeaza";
    else
        cout<<"Nu rimeaza";
        */
    return 0;
}
