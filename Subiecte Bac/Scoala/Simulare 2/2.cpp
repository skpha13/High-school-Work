#include <iostream>
#include <cstring>

using namespace std;

char s[256],*p;
int nr,cif,i,ok;

int main()
{
    cin.getline(s,256);
    p=strtok(s," ");
    while(p)
    {
        ok=0;
        for(i=0;i<strlen(p);i++)
            if(p[i]>='0' && p[i]<='9' && !ok)
            {
                nr++;
                cif++;
                ok=1;
            }
            else if(p[i]>='0' && p[i]<='9') cif++;
        p=strtok(NULL," ");
    }
    cout<<nr<<" "<<cif;
    return 0;
}