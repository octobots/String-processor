
#include <iostream>
#include <fstream>
using namespace std;

string process(string&);

int main()
{
    cout << "Enter the name of a file to process: " << endl;
    string str;
    getline(cin, str);
    
    ifstream infile(str);
    
    /* prints out the
     original string and processed
     string for each line in "str" */
    while(!infile.eof())
    {
        getline(infile, str);
        cout << "Original string: " << str << endl;
        cout << "Processed string: " << process(str) << endl;
    }
}

/* This function takes a string as input and returns the string with the
 first two characters of every word capitalized. If a character is
 already capitalized or is not alphabetical, it does not change. */

string process(string& s)
{
    for(unsigned int i = 0; i <= s.length(); i++)
    {
        /* checks to see if a character in "s" is a space and capitalizes
         the two characters directly afterward if true */
        if(s[i] == ' ')
        {
            s[i + 1] = toupper(s[i + 1]);
            s[i + 2] = toupper(s[i + 2]);
        }
        
        else if(i == 0)
        {
            s[i] = toupper(s[i]);
            s[i + 1] = toupper(s[i + 1]);
        }
    }
    return s;
}

