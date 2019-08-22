/*
	POINTERS:
	1. Same as C, except I added a function that takes a pointer arg

	TAKEAWAY:
	
	The variable name alone will always be the value. If the variable 
	name is preceded by an &, you access it's memory address. 

	When passing the variable name's memory address to a pointer, the 
	pointers value will hold the memory address while having it's own. 

*/

#include "iostream"

using namespace std;

void ptrFunction( int *p );

int main(){

	int i;
	int *ptr = new int;
	string output;

	i = 5;		// The variable name alone will always be the value.
	ptr = &i;	// When passing the variable name's memory address to a pointer, the 
				// ... pointers value will hold the memory address while having it's own.


	cout << "\nPRE-FUNCTION:\n";

	cout <<	"\ni  = " << i << endl;			// i = 5
	cout <<	"&i = " << &i << endl << endl;	// &i = i's memory address

	cout <<	"*ptr = " << *ptr << endl;		// *ptr = 5
	cout <<	"ptr  = " << ptr << endl;		// ptr = &i
	cout <<	"&ptr = " << &ptr << endl;		// &ptr = ptr's memory address


	ptrFunction( ptr );

	return 0;
}

void ptrFunction( int *p ){

	cout << "\nPOST-FUNCTION:\n";
	cout << "*p  = " << *p << "\n";
	cout << "p   = " << p << "\n";
	cout << "&p  = " << &p << "\n";
}