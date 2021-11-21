#include <iostream>
// #include <istream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    istringstream str("      ****   Programmer");
    string line;
    // Ignore all the whitespace in string
    // str before the first word.
    getline(str >> std::ws, line);

    // you can also write str>>ws
    // After printing the output it will automatically
    // write a new line in the output stream.
    cout << line << endl;
    // str >> ws;
    // without flush, the output will be the same.
    cout << "only a test";

    // Use of ends Manipulator
    cout << "\na";

    // NULL character will be added in the Output
    cout << "f" << ends;
    cout << "s" << endl;

    return 0;
}
