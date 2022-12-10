#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[256],*p,sep[]=" ";
    cin.getline(s,256);
    p=strtok(s,sep);
    while(p)
    {
        cout<<p<<" ";
        p=strtok(NULL,sep);
    }
    return 0;
}

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char s[1000],*p,sep[]=" ";
    int i,n,j;
    cin.getline(s,1000);
    n=strlen(s);
    for(i=0;i<n;i++)
        if(s[i]==' ')
            while(s[i+1]==' ')
                strcpy(s+i+1,s+i+2);
    if(s[0]==' ')
        for(j=0;j<n;j++)
            swap(s[j],s[j+1]);
    while(s[n-1]==' ')
        n--;
    for(i=0;i<n;i++)
        cout<<s[i];
    return 0;
}



