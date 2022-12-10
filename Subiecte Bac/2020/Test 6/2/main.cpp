#include <iostream>
#include <cstring>

using namespace std;

char s[101],*p;
int i,v,c,ok;

int main()
{
    cin.getline(s,101);
    p=strtok(s," ");
    while(p)
    {
        v=c=0;
        for(i=0;i<strlen(p);i++)
            if(strchr("aeiou",p[i]))
                v++;
            else
                c++;
        if(v<c)
        {
            ok=1;
            cout<<p<<endl;
        }
        p=strtok(NULL," ");
    }
    if(!ok)cout<<"nu exista";
    return 0;
}
