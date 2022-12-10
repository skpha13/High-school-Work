#include <iostream>
#include <cstring>

using namespace std;

char s[251],c[251];
int i;

int main()
{
    cin.getline(s,251);
    cin.getline(c,251);
    for(i=0;i<strlen(s);i++)
        if(strchr(c,s[i]))
            cout<<s[i];
    return 0;
}
