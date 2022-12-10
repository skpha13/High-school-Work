#include <iostream>

using namespace std;

void triplete(int a,int b,int c)
{
	int ok=0;
	for(int i=a;i<=b;i++)
		for(int j=i;j<=b;j++)
			for(int p=j;p<=b;p++)
				if(i+j+p==c)
				{
					cout<<'{'<<i<<','<<j<<','<<p<<'}';
					ok=1;
				}
	if(!ok)cout<<"nu exista";
}

int main()
{
	triplete(2,4,8);
	return 0;
}