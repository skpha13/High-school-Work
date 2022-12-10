#include <iostream>

using namespace std;

int nrcif(int n)
{
    if(n<10)return 1;
    else
    return 1+nrcif(n/10);
}

int main()
{
    int n;
    cin>>n;
    cout<<nrcif(n);
    return 0;
}
