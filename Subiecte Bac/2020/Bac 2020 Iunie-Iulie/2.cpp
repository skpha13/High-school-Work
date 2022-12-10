#include <iostream>
#include <cstring>

using namespace std;

char s[101],t[101],c,*p;
int i,ok;

int main()
{
    cin.getline(s,101);
    p=strtok(s," ");
    while(p)
    {
        c=p[0];
        if(strlen(p)>2)
        {
            for(i=0;i<strlen(p)-1;i++)
                p[i]=p[i+1],ok=1;
            p[i]=c;
        }
        strcat(t,p);
        strcat(t," ");
        p=strtok(NULL," ");
    }
    t[strlen(t)-1]=0;
    strcpy(s,t);
    if(!ok)cout<<"nu exista";
    else cout<<s;
    return 0;
}