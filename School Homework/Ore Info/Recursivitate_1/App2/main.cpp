#include <iostream>
#include <cstring>

using namespace std;

void caractere()
{
    char c;
    cin>>c;
    if(c!='*')caractere();
    cout<<c<<" ";
}

int main()
{
    caractere();
    return 0;
}
