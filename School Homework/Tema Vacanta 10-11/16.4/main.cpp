#include <iostream>
#include <fstream>

using namespace std;

ifstream f("numere.txt");

int v[10],x,i,j;

int main()
{
    while (f>>x){
        v[x]++;
    }
    for(i=9;i>=0;i--)
        for(j=1;j<=v[i];j++)
            cout<<i;
    return 0;
    f.close();
}
