#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("palindrom.in");
ofstream g("palindrom.out");

char s[256];
int n,i,j,k,ok;

void eliminare(char s[256])
{
    char a[256];
    int i=0;
    while(i<strlen(s))
        if(s[i]==' ')
        {
            strcpy(a,s+i+1);
            strcpy(s+i,a);
        }
        else
            i++;
}

int main()
{
    f>>n;
    f.get();
    i=1;
    while(i<=n)
    {
        f.getline(s,256);
        eliminare(s);
        ok=1;
        j=strlen(s)-1;
        k=0;
        while(k<=strlen(s)/2)
        {
            if(s[j]!=s[k])
                ok=0;
            k++;
            j--;
        }
        if(ok)
            g<<1<<endl;
        else
            g<<0<<endl;
        i++;
    }
    return 0;
}
