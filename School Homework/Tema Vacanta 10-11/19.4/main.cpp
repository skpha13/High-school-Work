#include <iostream>
#include <fstream>

using namespace std;

ifstream f("nr1.txt");
ifstream g("nr2.txt");

int main()
{
    int x,y,a[101],i=0,p=0;
    f>>x>>x;
    g>>y>>y;
    while(!f.eof() || !g.eof()){
        if(x>y){
            i++;
            a[i]=y;
            g>>y;
        }
            else{
                i++;
                a[i]=x;
                f>>x;
            }
        if(x==y)f>>x;
        p++;
    }
    for(i=1;i<=p;i++){
        cout<<a[i]<<" ";
    }
    return 0;
    f.close();
}
