#include <iostream>
#include <cstring>

using namespace std;

char s[256],a[256];
int i,j,k;

int main()
{
    cin.getline(s,256);
    for(i=0;i<strlen(s)-1;i++)
    {
        k=0;
        j=i;
        while(strchr("aeiou",s[j]) && j<strlen(s))
        {
            k++;
            j++;
        }
        if(k>1)
        {
            strcpy(a,s+i+k);
            strcpy(s+i,a);
        }
    }
    cout<<s;
    return 0;
}
