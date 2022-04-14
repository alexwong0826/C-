#include <iostream>
#include <fstream>
#include <String>
//ofstream	Creates and writes to files
//ifstream	Reads from files
//fstream	A combination of ofstreamand ifstream: creates, reads, and writes to files
using namespace std;

int main() {
	// Create and open a text file
	ofstream MyFile("sample.txt");

	// Write to the file
	MyFile << "Text file created!!";

	// Close the file
	MyFile.close();

	// Create a text string, which is used to output the text file
	string myText;

	/*
	// Read from the text file
	fstream MyReadFile("sample.txt");

	// Use a while loop together with the getline() function to read the file line by line
	while (getline(MyReadFile, myText)) {
		// Output the text from the file
		cout << myText;
	}

	// Close the file
	MyReadFile.close();
	*/
}