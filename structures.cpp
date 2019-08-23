/*
	STRUCTURES:
	1. Simple struct using a typedef. 

	“If you can't fly then run, if you can't run then walk, 
	if you can't walk then crawl, but whatever you do you 
	have to keep moving forward.” - MLK Jr.
*/

#include "iostream"

using namespace std;

typedef struct database{
	int id;
	int age;
	float salary;
}db;

void printStruct( struct database employee );

int main(){

	db employee; // db is a typedef of a database struct

	employee.id = 001;
	employee.age = 24;
	employee.salary = 130131.54;

	printStruct( employee );

	return 0;
}


void printStruct( struct database employee ){

	cout << "employee.id = " << employee.id << endl;
	cout << "employee.age = " << employee.age << endl;
	cout << "employee.salary = " << employee.salary << endl;

}