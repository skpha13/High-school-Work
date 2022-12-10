#include <iostream>
#include <cstring>

using namespace std;

char s[51],v[5][51]={"COLEGIUL","LICEAL","NATIONAL","TEORETIC"},t[101],*p;
int i;

int main()
{
    cin.getline(s,51);
    p=strtok(s," ");
    while(p)
    {
        if(p[strlen(p)-1]=='.')
        {
            for(i=0;i<5;i++)
                if(p[0]==v[i][0]) break;
            strcat(t,v[i]);
            strcat(t," ");
        }
        else
        {
            strcat(t,p);
            strcat(t," ");
        }
        p=strtok(NULL," ");
    }
    t[strlen(t)-1]=0;
    cout<<t;
    return 0;
}