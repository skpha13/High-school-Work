#include <iostream>
#include <fstream>

using namespace std;

ifstream f("NUMAR.TXT");

int i,ok;
float x,y;

int main()
{
	f>>x;
	i=1;
	while(ok==0)
    {
        y=i*x;
		if(y==(int)y)
        {
            ok=1;
            break;
        }
		i++;
    }
	cout<<y<<" "<<i;
	return 0;
}
