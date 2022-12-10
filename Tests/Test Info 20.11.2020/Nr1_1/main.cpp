/*#include <iostream>
#include <cstring>

using namespace std;

char s[256],*p,sep[]=" ";

int main()
{
    cin.getline(s,256);
    p=strtok(s,sep);
    while(p)
    {
        if(strchr("aeiouAEIOU",p[0]))
            cout<<p<<" ";
        p=strtok(NULL,sep);
    }
    return 0;
}
*/

#include <iostream>
#include <cstring>

using namespace std;

char s[256],t[256],*p;
int i,ok;

int main()
{
    cin.getline(s,256);
    p=strtok(s," ");
    while(p)
    {
        if(strlen(p)%2!=0 && strlen(p)>=3)
            p[strlen(p)/2]-=32;
        strcat(t,p);
        strcat(t," ");
        p=strtok(NULL," ");
    }
    cout<<t;
    return 0;
}

// MINCU ADRIAN-LUCIAN 11M2 NUMARUL 1
