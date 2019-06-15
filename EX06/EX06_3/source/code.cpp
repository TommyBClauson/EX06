#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // delcaring vars
    int year, rank, numBoy, numGirl;
    char G;
    string name, boyName, girlName, fileName;

    // asking user to input a year
    cout << "Please enter a year you would like to check for baby names." << endl;
    cout << "Enter Year Here: ";
    cin >> year;

    //if else conditions to check years 2001 - 2010 and wich file to use
    // im using ".prn" beucase i copied names to excel worksheet and convert it
    // so it was a little nicer to look at, every line of the copied txt file was
    // messed up/ out of place
        if (year == 2001)
        {
            fileName = "Babynameranking2001.prn";
        }
        else if (year == 2002)
        {
            fileName = "Babynameranking2002.prn";
        }
        else if (year == 2003)
        {
            fileName = "Babynameranking2003.prn";
        }
        else if (year == 2004)
        {
            fileName = "Babynameranking2004.prn";
        }
        else if (year == 2005)
        {
            fileName = "Babynameranking2005.prn";
        }
        else if (year == 2006)
        {
            fileName = "Babynameranking2006.prn";
        }
        else if (year == 2007)
        {
            fileName = "Babynameranking2007.prn";
        }
        else if (year == 2008)
        {
            fileName = "Babynameranking2008.prn";
        }
        else if (year == 2009)
        {
            fileName = "Babynameranking2009.prn";
        }    
        else if (year == 2010)
        {
            fileName = "Babynameranking2010.prn";
        }
        else
            cout << "Sorry no year for your entry." << endl;

    // now asking user for name they would like to search and the gender
    cout << "Now that you have selected a year, please enter the gender and" << endl;
    cout << "name of the baby you like to search." << endl;
    cout << "Enter Gender Here: ";
    cin >> G;
    cout << "Enter Name of Baby Here: ";
    getline(cin, name);

    // opening the file
    ifstream input(fileName.c_str());

    // check to see if the file exist
    if (input.fail())
    {
        cout << fileName << " does not exist." << endl;
        cout << "EXIT PROGRAM" << endl;
        return 0;
    }

    //
    if (!input.eof())
    {
        while (!input.eof())
        {
            input >> rank >> boyName >> numBoy >> girlName >> numGirl;
            
            if (G == 'M' || G == 'm')
            {
                if (name == boyName)
                {
                    cout << name << " is ranked at #" << rank << " in year " << year << endl;
                    return 0;
                }
            }
            else if (G == 'F' || G == 'f')
            {
                if (name == girlName)
                {
                    cout << name << " is ranked at #" << rank << " in year " << year << endl;
                    return 0;
                }
            }
        }
    }

    // closing the input file
    input.close();
    return 0;
    
}