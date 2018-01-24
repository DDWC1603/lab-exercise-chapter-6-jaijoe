#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char strPswd[80];

	cout<<"Enter password: ";
	cin>> strPswd;

	if((strcmp(strPswd, "Rohayah156"))!=0)
	{
				cout<<"invalid password"<<endl;
	}
	else
	{
		cout<<"logged in"<<endl;

	}

	return 0;
}
