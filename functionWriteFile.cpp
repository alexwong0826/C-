#include <iostream>
#include <fstream>
using namespace std;

//ofstream can create/write
void writeToFile(ofstream& outputFile, int x)
{
    outputFile << x << endl;
}

int main()
{
    ofstream outputFile;
    outputFile.open("testing.txt");
    writeToFile(outputFile, 100);

    for (int i = 0; i < 10; i++)
    {
        writeToFile(outputFile, i);
    }

    outputFile.close();
    return 0;
}