#include <iostream>
#include <string>
using namespace std;
void strcount(const string & str);
int main()
{
    string input;

    cout << "Enter a line:\n";
    getline(cin, input);
    while (input != "")
    {
        strcount(input);
        cout << "Enter next line (empty line ot quit):\n";
        getline(cin, input);
    }
    cout << "Bye.\n";
    return 0;
}
void strcount(const string & str)
{
    static int total = 0;
    int count = 0;

    cout << "\"" << str << "\" contains ";
    while (str[count])
        count++;
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}
