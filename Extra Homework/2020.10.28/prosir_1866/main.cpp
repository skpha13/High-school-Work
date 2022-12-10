#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("prosir.in");
ofstream g("prosir.out");

int main()
{
    char s[202];
    int i;
    f.getline(s,202);
    for(i=0;i<strlen(s);i++)
        if((s[i]>='a' && s[i]<='z') && (s[i+1]==' ' || s[i+1]=='.'))
            s[i]='5';
    g<<s;
    return 0;
}
