#include <iostream>

using namespace std;

int v[101],vf,nr;

int main()
{
    cout<<"numarul=";cin>>nr;
    while(nr){
        v[++vf]=nr%2;
        nr/=2;
    }
    while(vf)
        cout<<v[vf--];
    return 0;
}
