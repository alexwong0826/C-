#include <iostream>
using namespace std;

// declare a class
class  Wall {
private:
	double length;
	double height;

public:
	// default constructor 
	Wall() {
		length = 5.5;
		height = 1;
		cout << "Creating a wall." << endl;
		cout << "Length = " << length << endl;
		cout << "height = " << height << endl;
	}
	//question: how do we promopt user to enter the length and height?	

	// parameterized constructor to initialize variables
	Wall(double len, double hgt) {
		length = len;
		height = hgt;
	}

	//setter 
	void setLength(double len) {
		length = len;
	}

    //getter
	double getLength() {
		return length;
	}

	//what about height?

	//member function that calculate the area of a wall
	double calculateArea() {
		return length * height;
	}

};

int main() {

	//when the wall1 object is created, the Wall() constructor is called. This sets the length variable of the object to 5.5.
	Wall wall;

	// create object and initialize data members
	Wall wall1(10.5, 8.6);
	Wall wall2(8.5, 6.3);
	cout << "Area of wall: " << wall.calculateArea() << endl;
	cout << "Area of Wall 1: " << wall1.calculateArea() << endl;
	cout << "Area of Wall 2: " << wall2.calculateArea();

	//questions: how to use getter and setter ???

	
	return 0;
}

