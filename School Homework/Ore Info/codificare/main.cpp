#include <iostream>
#include <cstring>

using namespace std;

char s[256],s1[256];
int i,poz,l,k,j,ok,p;

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

int main()
{
    cin.getline(s,256);
    for(i=0;i<strlen(s)-1;i++)
    {
        while(s[i]==s[i+1])
        {
            k++;
            strcpy(s+i,s+i+1);
        }
        p=i;
        while(p<strlen(s))
            if(k>=2)
            {
                for(j=strlen(s)-1;j>=p+1;j--)
                    s[j+1]=s[j];
                s[p+1]='#';
                p+=2;
                ok=1;
            }
            else
                i++;
    }
    cout<<s;
    return 0;
}
