#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
using namespace std;

int main()
{
    // Creating the file stream object
    // delcaring object
    ofstream output; // output object is going to open the txt file
    // delcaring x to be number per line

    
    //opening a file
    output.open("Exercise13_1.txt", ios::out);

    cout << "Creating a text file: " << endl;
    srand(time(NULL));

    // loop to makeup 100 random integers
    for (int i = 0; i < 100; i++)
    {
        output << rand() % 100 + 1 << " ";  
    }

    // closing the txt file
    output.close();
    
    cout << "Data Created" << endl;

    return 0;
}