#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    std::cout << "Hello, World!" << std::endl;

    vector<string> rainData;
    string filename = "AvgRainfall.txt";

    ifstream in(filename);

    if(!in)
    { cout << "Couldn't open " << filename << endl; }
    else
    {
        for(string line; getline(in,line);)
        {
            cout << line << endl;


        }
    }
    return 0;
}