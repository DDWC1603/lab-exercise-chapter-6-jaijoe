#include <iostream>
using namespace std;

int ary[]={1,2,3,4,5};

int n, result=0;

int main()
{
	int n;

	for(n=0;n<5;n++)
	{
		result += ary[n];
	}
	cout<<result;
}
