#include <iostream>
#include <cstring>

using namespace std;

char s[101],*p,sep[]=" ",v[16][4];

void adaug_note(char v[16][4])
{
    strcpy(v[1],"DO");
    strcpy(v[2],"RE");
    strcpy(v[3],"MI");
    strcpy(v[4],"FA");
    strcpy(v[5],"SOL");
    strcpy(v[6],"LA");
    strcpy(v[7],"SI");
}

int cautare(char *p,char v[16][4])
{
    int i,n=7;
    for(i=1;i<=n;i++)
        if(strstr(p,v[i]))
            return 1;
    return 0;
}

void parcurgere(char s[])
{
    int ok=0;
    p=strtok(s,sep);
    while(p)
    {
        if(cautare(p,v))
        {
            cout<<p<<endl;
            ok=1;
        }
        p=strtok(NULL,sep);
    }
    if(!ok)cout<<"nu exista";
}

int main()
{
    cin.getline(s,101);
    adaug_note(v);
    parcurgere(s);
    return 0;
}
