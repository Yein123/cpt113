#include<iostream>
#include<fstream>
#include<cstdlib>
#include "Dynqueue.h"
using namespace std;

int main()
{
    fstream inFile, outFile;
    Dynque<char> myQ;
    char ch, c, filename[20];

    // Input name of file
    cout << "Enter name of file : ";
    cin >> filename;

    // Open file in input mode
    inFile.open(filename, ios::in);

    // Test whether file can be opened or not.
    if (inFile.fail())
    {
        cout << "Error in opening source file...." << endl;
        return 0;
    }

    // Read file character by character until end-of-file marker is reached
    while (!inFile.eof())
    {
        inFile.get(ch);
        myQ.enqueue(ch);
    }

    inFile.close(); // Close input file

    outFile.open("encrypt.txt", ios::out); // open file in output mode

    // Test whether destination file opens or not
    if (outFile.fail())
    {
        cout << "Error creating destination file....";
        return 0;
    }

    cout << "\nEncrypting contents of " << filename << " in encrypt.txt" << endl;

    while (!myQ.isEmpty())
    {
        myQ.dequeue(ch);
        if (ch == '\n')
            c = ch;
        else
            c = ch + 5;
        outFile << c;
    }

    // Close output file
    outFile.close();

    return 0;
}
