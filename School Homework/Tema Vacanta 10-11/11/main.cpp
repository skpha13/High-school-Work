#include <iostream>
#include <fstream>

using namespace std;

ifstream f("numere.txt");

int main()
{
    int n,i=0,x,a[101],m,maxx;
    f>>x;
    n=x;
    while (!f.eof()){
        f>>x;
        i++;
        a[i]=x;
        m=i;
    }
    maxx=a[1];
    cout<<maxx<<" ";
    for (i=2;i<=m;i++){
        if(maxx<a[i]){
            cout<<a[i]<<" ";
            maxx=a[i];
        }
                else
                    cout<<maxx<<" ";
    }
    return 0;
    f.close();
}
