/*
	STRINGS:
	1. Use cstring header to use string methods such as:

		- strcmp: compares 2 strings
		- strlen: returns length of string
		- strcat: appends the second string to first string
*/

#include "iostream"
#include "cstring"

using namespace std;

int main(){

	char firstname[50];
	char lastname[50];
	char fullname[100];

	cout << "Enter first name: ";
	cin.getline( firstname, 49 );

	if( strcmp( firstname, "Abe" ) == 0 )
		cout << "My name is Abe as well!" << endl;
	else
		cout << "Hello, " << firstname << endl;

	cout << "The length of firstname = " << strlen( firstname ) << endl;
	cout << "strcmp( firstname, Abe ) = " << strcmp( firstname, "Abe" ) << endl;

	cout << "Enter last name: ";
	cin.getline( lastname, 49 );
	fullname[0] = '\0';

	strcat( fullname, firstname);
	strcat( fullname,  " ");
	strcat( fullname,  lastname);

	cout << "Fullname = " << fullname << endl;

	return 0;
}





















