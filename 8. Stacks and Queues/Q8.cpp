#include<iostream>
#include<fstream>
#include<cstdlib>
#include "Dynqueue.h"

using namespace std;

int main()
{
    // Create an input file stream object.
    fstream file1("file1.txt", ios::in);
    // Create an output file stream object.
    fstream file2("file2.txt", ios::in);
    // Create two queues to hold characters.
    Dynque<char> queue1;
    Dynque<char> queue2;
    char ch1, ch2;

    // Read all the characters from file #1 and enqueue them in queue1.
    file1.get(ch1);
    while (!file1.eof())
    {
        queue1.enqueue(ch1);
        file1.get(ch1);
    }

    // Read all the characters from file #2 and enqueue them in queue2.
    file2.get(ch2);
    while (!file2.eof())
    {
        queue2.enqueue(ch2);
        file2.get(ch2);
    }

    // Close the files.
    file1.close();
    file2.close();

    // Dequeue the characters from each queue
    // one-at-a-time and compare them.
    bool status = true;
    while (!queue1.isEmpty() && !queue2.isEmpty())
    {
        queue1.dequeue(ch1);
        queue2.dequeue(ch2);
        if (ch1 != ch2)
        {
            status = false;
        }
    }

    if (status)
    {
        cout << "The files are identical.\n";
    }
    else
    {
        cout << "The files are not identical.\n";
    }

    return 0;
}
