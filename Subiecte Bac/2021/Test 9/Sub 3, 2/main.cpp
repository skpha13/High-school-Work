#include <iostream>
#include <cstring>

using namespace std;

char s[101],*p,t[]="aeiou";
int i,k,ok;

int main()
{
    cin.getline(s,101);
    p=strtok(s," ");
    while(p)
    {
        k=0;
        for(i=0;i<strlen(t);i++)
            if(strchr(p,t[i]))
                k++;
        if(k==1)
        {
            ok=1;
            cout<<p<<endl;
        }
        p=strtok(NULL," ");
    }
    if(!ok)cout<<"nu exista";
    return 0;
}
