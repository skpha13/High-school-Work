#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

char s[256];
int i,sum,x,j;

int main()
{
    cin.getline(s,256);
    i=0;
    while(i<strlen(s))
    {
        x=0;
        if(s[i]>='0' && s[i]<='9')
        {
            x=x*10+atoi(s+i);
            j=i+1;
            while(s[j+1]>='0' && s[j+1]<='9' && j<strlen(s))
                j++;
            i=j;
        }
        sum+=x;
        i++;
    }
    cout<<sum;
    return 0;
}
