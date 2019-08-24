/*
	ARRAYS:
	1. Prompt user for a number, create a times table of number x number
*/

#include "iostream"

using namespace std;

int multiply( int x, int y);

int main(){

	int num;

	cout << "Enter a number to delare the number of rows and columns: ";
	cin >> num;

	int array[num][num];

	for( int y = 1; y < num+1; ++y ){
		for( int x = 1; x < num+1; ++x ){

			array[x][y] = multiply( x, y );
			cout << "[" << array[x][y] << "]";

		}
		cout << endl;
	}

	return 0;
}

int multiply( int x, int y){
	return x * y;
}