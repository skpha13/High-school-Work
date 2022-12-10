#include <iostream>

using namespace std;

int putere(int a,int n)
{
    if(n==0)return 1;
    return a*putere(a,n-1);
}

int main()
{
    int a,n;
    cin>>a>>n;
    cout<<putere(a,n);
    return 0;
}
