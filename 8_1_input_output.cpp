#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <fstream>

using namespace std;

int main(int argc, char **argv)
{
    // checks for command line arguments
    if (argc == 3)
    {
        // number input 
        string number = argv[2];
        int number_int;
        number_int = atoi(number.c_str());
        
        // filename input 
        ifstream input(argv[1]);
        if (!input)
        {
            cout << "no file: " << argv[1] << endl;
            return 1;
        }
        
        // filename output
        ofstream output("longer.txt", ios::trunc);

        // read lines and compare to number 
        char line[100];
        int line_number = 0;
        while( input.getline(line,100) )
        {
            if (strlen(line) >= number_int)
            {
                cout << line_number << ": " << line << endl;
                output << line_number << ": " << line << endl;
            }
            line_number++;
        }
    }
    else 
    {
        cout << "error with command line arguments! please try again..." << endl;
    }
    
    return 0;
}
