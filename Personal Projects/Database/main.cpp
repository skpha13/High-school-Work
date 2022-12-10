#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstring>

using namespace std;

fstream f("data.txt");

char database[100][4][100];
int n;

void sorting()
{
	char aux[50];
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i; j < n; j++)
			if(strcmp(database[i][1],database[j][1]) > 0)
				for(int k = 0; k < 4; k++)
				{
					strcpy(aux,database[i][k]);
					strcpy(database[i][k],database[j][k]);
					strcpy(database[j][k],aux);
				}
	}
}

void data_pull(int &n)
{
	char s[200], *p;
	int i = 0;
	while(f.eof()==0)
	{
		f.getline(s,200);
		if(strcmp(s,"")==0) break;
		p = strtok(s," ");
		for(int j = 0; j<4 && p; j++)
		{
			strcpy(database[i][j],p);
			p = strtok(NULL," ");
		}
		i++;
	}
	f.close();
	n = i;
	sorting();
}

void data_push(int n)
{
	f.open("data.txt");
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < 4; j++)
			f<<database[i][j]<<" ";
		f<<endl;
	}
	f.close();
}

void print_data(int n)
{
	cout<<endl;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < 4; j++)
			cout<<database[i][j]<<" ";
		cout<<endl;
	}
}

void menu_display()
{
	cout<<endl;
	for(int i = 0; i < 15; i++)
		cout<<"-";
	cout<<"Menu";
	for(int i = 0; i < 15; i++)
		cout<<"-";
	cout<<endl;
	cout<<"Please select one of the options:"<<endl;
	cout<<"1) Find a person's information"<<endl;
	cout<<"2) Add a person to the database"<<endl;
	cout<<"3) Edit a person's information"<<endl;
	cout<<"4) Display all records on the screen"<<endl;
	cout<<"5) Quit"<<endl;
}

int binary_search()
{
	char name[50];
	cout<<"Please enter name: ";
	cin.getline(name,50);

	int ls = 0, ld = n-1, m, index = -1, temp;
	while(ls <= ld)
	{
		m = (ld+ld)/2;
		temp = strcmp(database[m][1],name);
		if (temp == 0)
		{
			index = m;
			break;
		}
		if (temp > 0)
			ld = m - 1;
		if (temp < 0)
			ls = m + 1;
	}
	return index;
}

void option1()
{
	int index;
	index = binary_search();
	cout<<index<<endl;
	if(index == -1)
	{
		cout<<"Name wasn't found: "<<endl;
		option1();
	}
	else
		{
			cout<<endl;
			for(int i = 0; i < 4; i++)
				cout<<database[index][i]<<" ";
			cout<<endl;
		}
}

void option2()
{
	n++;
	cout<<"Please introduce following information about the person: "<<endl;
	cout<<"First Name: ";
	cin.getline(database[n-1][0],50);
	cout<<"Last Name: ";
	cin>>database[n-1][1],50;
	cout<<"Phone number ";
	cin>>database[n-1][2],50;
	cout<<"Birth date: ";
	cin>>database[n-1][3],50;
	
	sorting();
}

void option3()
{
	int index;
	index = binary_search();

	char read[50];
	if (index!=-1)
	{
		int option = 0;
		bool exit = 1;
		while(exit)
		{
			cout<<"What do you want to change?"<<endl;
			cout<<"1) First Name"<<endl;
			cout<<"2) Last Name"<<endl;
			cout<<"3) Phone Number"<<endl;
			cout<<"4) Birth Date"<<endl;
			cout<<"5) Nothing"<<endl;
			cin>>option;
			cin.get();
			switch (option)
			{
			case 1:
				cout<<"Enter first name: ";
				cin.getline(read,50);
				strcpy(database[index][0],read);
				break;
			case 2:
				cout<<"Enter last name: ";
				cin.getline(read,50);
				strcpy(database[index][1],read);
				break;
			case 3:
				cout<<"Enter phone number: ";
				cin.getline(read,50);
				strcpy(database[index][2],read);
				break;
			case 4:
				cout<<"Enter birth date: ";
				cin.getline(read,50);
				strcpy(database[index][3],read);
				break;
			case 5:
				exit = 0;
				break;
			default:
				cout<<"You didn't introduce a valid option. Please try again"<<endl;
				break;
			}
		}

		sorting();
	}
	else
	{
		cout<<"Person not found. Please try again"<<endl;
		option3();
	}

}

void menu()
{
	int option = 0;
	bool exit = 1;
	while(exit)
	{
		menu_display();
		cin>>option;
		cin.get();
		switch (option)
		{
		case 1:
			option1();
			break;
		case 2:
			option2();
			break;
		case 3:
			option3();
			break;
		case 4:
			print_data(n);
			break;
		case 5:
			exit = 0;
			break;
		default:
			cout<<"You didn't introduce a valid option. Please try again"<<endl;
			break;
		}
	}
	data_push(n);
}

int main()
{
	data_pull(n);
	menu();
	return 0;
}