#include <iostream>
#include <cstring>

using namespace std;

char s[101],t[303],*p,c;
int ok;

int main()
{
    cin.getline(s,101);
    p=strtok(s," ");
    c=p[strlen(p)-1];
    strcat(t,p);
    strcat(t," ");
    p=strtok(NULL," ");
    while(p)
    {
        if(p[strlen(p)-1]==c)
        {
            strcat(t,"succes ");
            strcat(t,p);
            strcat(t," ");
            ok=1;
        }
        else
        {
            strcat(t,p);
            strcat(t," ");
        }
        c=p[strlen(p)-1];
        p=strtok(NULL," ");
    }
    if(!ok)cout<<"nu exista";
    else
        cout<<t;
    return 0;
}