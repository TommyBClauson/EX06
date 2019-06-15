#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // delcing object

    //delcaring vars for file name and input to file
    string fileName;
    int count;
    // asking user for file name
    cout << "Please enter a file name: ";
    getline(cin, fileName);
    
    // delcaring object
    // setting string class to return a string object
    ifstream input(fileName.c_str());

    // check to see if file exist or not
    if (input.fail())
    {
        cout << fileName << ": Does not exist" << endl;
        cout << "Exit Program" << endl;
        return 0;
    }

    // calling eof func to be used to check input obect 
    // continue if not end of file
    while (!input.eof())
    {
        input.get();
        // increment the count var
        count++;
    }

    // endding count after the last character is read
    count--;

    // closing the file
    input.close();

    //Displaying the number of characters
    cout << "The number of characters in the file are: " << count << endl;
    return 0;
}