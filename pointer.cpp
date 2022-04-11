
/*
#include <iostream>
using namespace std;

int main() {
	int  var = 20;   // actual variable declaration.
	int* ip;        // pointer variable

	ip = &var;       // store address of var in pointer variable

	cout << "Value of var variable: ";
	cout << var << endl;

	// print the address stored in ip pointer variable
	cout << "Address stored in ip variable: ";
	cout << ip << endl;

	// access the value at the address available in pointer
	cout << "Value of *ip variable: ";
	cout << *ip << endl;

	return 0;
}
*/

/*
// my first pointer
#include <iostream>
using namespace std;

int main()
{
	int firstvalue, secondvalue;
	int* mypointer;

	mypointer = &firstvalue;
	*mypointer = 10;
	mypointer = &secondvalue;
	*mypointer = 20;
	cout << "firstvalue is " << firstvalue << '\n';
	cout << "secondvalue is " << secondvalue << '\n';
	return 0;
}
*/

// more pointers
#include <iostream>
using namespace std;

int main()
{
	int var = 5;
	int* pointVar;

	// assign address of var
	pointVar = &var;

	// change value at address pointVar
	*pointVar = 1;

	cout << var << endl; // Output: 1
	return 0;
}
//Here, pointVar and &var have the same address, the value of var will also be changed when *pointVar is changed.

//int var, * varPoint;

// Wrong! 
// varPoint is an address but var is not
//varPoint = var;

// Wrong!
// &var is an address
// *varPoint is the value stored in &var
// *varPoint = &var;

// Correct! 
// varPoint is an address and so is &var

// varPoint = &var;

// Correct!
// both *varPoint and var are values
// *varPoint = var;