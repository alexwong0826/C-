//Accessing Struct Members 
#include <iostream>    
using namespace std;
struct Person
{
	int citizenship;
	int age;
};
int main(void) {
	struct Person p;
	p.citizenship = 1;      //use the instance of the struct and . operator 
	p.age = 27;        
	cout << "Person citizenship: " << p.citizenship << endl;
	cout << "Person age: " << p.age << endl;

	return 0;
}

/*
//Pointers to Structure
struct Length
{
	int meters;
	float centimeters;
};

int main()
{
	Length* ptr, l;

	ptr = &l;

	cout << "Enter meters: ";
	cin >> (*ptr).meters;
	cout << "Enter centimeters: ";
	cin >> (*ptr).centimeters;
	cout << "Length = " << (*ptr).meters << " meters " << (*ptr).centimeters << " centimeters";

	return 0;
}

//Struct as Function Argument
#include<iostream>
using namespace std;

struct Person
{
	int citizenship;
	int age;
};

void func(struct Person p);         //You can pass a struct to a function as an argument

int main()
{
	struct Person p;

	p.citizenship = 1;
	p.age = 27;

	func(p);                  
	return 0;
}
void func(struct Person p)
{
	cout << " Person citizenship: " << p.citizenship << endl;
	cout << " Person age: " << p.age;
}

*/