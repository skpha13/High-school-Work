#include <iostream>

using namespace std;

int a,b;

int putere(int a,int b)
{
    if(b==0)return 1;
    return a*putere(a,b-1);
}

int main()
{
    cin>>a>>b;
    cout<<putere(a,b);
    return 0;
}
