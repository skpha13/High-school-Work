#include <iostream>
#include <cstring>

using namespace std;

char s[101],*p,*c,t[4];
int i,nr;

int main()
{
    cin.getline(s,101);
    p=strtok(s," ");
    for(i=0;i<strlen(p);i++)
        if(!strchr("aeiou",p[i]))
        {
            t[0]=p[i];
            nr++;
            break;
        }
    c=strtok(NULL," ");
    for(i=0;i<strlen(c);i++)
        if(strchr("aeiou",c[i]))
        {
            t[1]=c[i];
            nr++;
            break;
        }
    while(c)
    {
        t[2]=c[strlen(c)-1];
        c=strtok(NULL," ");
    }
    t[3]=0;
    if(nr==2)cout<<t;
    else cout<<"nu exista";
    return 0;
}