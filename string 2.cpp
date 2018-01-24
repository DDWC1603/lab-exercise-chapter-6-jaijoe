#include <iostream>
#include <string.h>
using namespace std;

int main(){

    char char1  [11]="HELLO", char2[11]="AJAI";
	
	cout<<char1<<endl;
	cout<<char2<<endl;
	strcat(char1,char2);
	cout<<char1<<endl;

	return 0;
}

