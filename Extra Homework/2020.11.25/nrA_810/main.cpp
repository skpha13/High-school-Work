#include <iostream>
#include <cstring>

using namespace std;

char s[71],*p;
int k;

int main()
{
    cin.getline(s,71);
    p=strtok(s," ");
    while(p)
    {
        if(strchr(p,'a'))
            k++;
        p=strtok(NULL," ");
    }
    cout<<k;
    return 0;
}
