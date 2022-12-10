#include <iostream>

using namespace std;

int sumacif(int n)
{
    if(n<10)return n;
    return n%10+sumacif(n/10);
}

int main()
{
    int n;
    cin>>n;
    cout<<sumacif(n);
    return 0;
}
