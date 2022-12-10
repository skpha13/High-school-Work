#include <iostream>
#include <cstring>

using namespace std;

char s[256],s1[256],t[256];
int i,poz;

void stergere(char s[256],int poz,int l)
{
    strcpy(s+poz,s+poz+l);
}

void eliminare(char s[256],char s1[256])
{
    int n,poz;
    n=strlen(s1);
    while(strstr(s,s1))
    {
        poz=strstr(s,s1)-s;
        stergere(s,poz,n);
        cout<<s;
    }
}

void inserare(char s[256],char s1[256],int poz)
{
    char s2[256];
    strncpy(s2,s,poz);
    strcat(s2,s1);
    strcat(s2,s+poz);
    strcpy(s,s2);
}

int main()
{
    cin.getline(s,256);
    cin.getline(s1,256);
    //cin.getline(t,256);
    //cout<<"Pozitie inserare=";cin>>poz;
    eliminare(s,s1);
    cout<<s;
    return 0;
}
