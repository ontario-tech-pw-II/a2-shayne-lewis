#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
 	ifstream fin;
 	ofstream fout;
	
	// check if there are enough arguments
	if (argc == 3)
    {
	
        // open the first file
        fin.open("file1.txt");

        char c;

        if (fin.fail()) // check if it is successful 
        {
            cerr << " Cannot open the input file!" << endl;
            return 1;
        }
        

        // open the second file
        fout.open("file2.txt");

        if (fout.fail())
        {
            cerr << " Cannot open the output file!" << endl;
            return 1;
        }
        
        while(fin.get(c)) 
        {
            fout << c;
        }
    }
    else
    {
        cerr << "Not enough arguments!" << endl;
        return 1;
    }
    
 	fin.close(); 

 	fout.close();

 	 return 0;

 } 

