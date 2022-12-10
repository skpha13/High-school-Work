#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("sortarecuvinte1.in");
ofstream g("sortarecuvinte1.out");

char s[201][31];
int i,j,n;

int main()
{
    while(!f.eof())
        f.getline(s[++n],31);
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(strcmp(s[i],s[j])>0)
                swap(s[i],s[j]);
    for(i=1;i<n;i++)
        g<<s[i]<<endl;
    return 0;
}
