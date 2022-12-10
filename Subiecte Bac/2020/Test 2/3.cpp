#include <iostream>
#include <fstream>

using namespace std;

ifstream f("bac.in");

int x,a,b,c;

int main()
{
	while(f>>x)
	{
		if(x%100==20)
        {
            if(x>c)
            {
                a=b;
                b=c;
                c=x;
            }
            else
                if(x>b && x<=c)
                {
                    a=b;
                    b=x;
                }
            else
                if(x>a && x<=b)
                    a=x;
        }
	}
	cout<<a<<" "<<b<<" "<<c;
	f.close();
	return 0;
}
