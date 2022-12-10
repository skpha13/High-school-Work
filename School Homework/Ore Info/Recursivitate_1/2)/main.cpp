#include <iostream>
#include <cstring>

using namespace std;

void caractere(char c)
{
    cin>>c;
    if(c!='*')caractere(c);
}

int main()
{
    char c;
    caractere(c);
    return 0;
}
