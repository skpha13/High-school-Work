#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.txt");

int main()
{
    int n,i,x,a[101],k=0;
    while(f>>x){
        i++;
        a[i]=x;
    }
    n=i;
    for(i=n;i>=1;i--){
        if(a[i]%2!=0 && k<2){
            k++;
            cout<<a[i];
        }
    }
    if(k<2)cout<<"Numere Insuficiente";
    return 0;
    f.close();
}
