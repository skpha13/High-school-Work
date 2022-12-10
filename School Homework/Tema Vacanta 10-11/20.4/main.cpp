#include <iostream>
#include <fstream>

using namespace std;

ifstream f("nr1.txt");
ifstream g("nr2.txt");

int main()
{
    int x,y;
    f>>x>>x;
    g>>y>>y;
    while(!f.eof() || !g.eof()){
        if(x==y){
            cout<<x;
            f>>x;
        }
            else
                if(x>y)
                    g>>y;
                    else
                        f>>x;
        f>>x;
        g>>y;
    }
    return 0;
    f.close();
    g.close();
}
