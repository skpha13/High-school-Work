#include <iostream>
#include <cstring>

using namespace std;

char s[101],t[101],*p;
int i,ok;

int main()
{
    cin.getline(s,101);
    p=strtok(s," ");
    while(p)
    {
        if(strlen(p)%2!=0 && strlen(p)>=3)
        {
            i=p-s;
            strcpy(s+i+strlen(p)/2,s+i+strlen(p)/2+1);
            ok=1;
        }
        strcat(t,p);
        strcat(t," ");
        p=strtok(NULL," ");
    }
    if(ok)
        cout<<t;
    else
        cout<<"nu exista";
    return 0;
}
