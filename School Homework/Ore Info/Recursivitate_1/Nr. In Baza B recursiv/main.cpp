#include <iostream>

using namespace std;

int baza_b(int n,int b)
{
    if(!n)return 0;
    return n%b+10*baza_b(n/b,b);
}

int main()
{
    int n,b;
    cin>>n>>b;
    cout<<baza_b(n,b)<<endl;
    return 0;
}
