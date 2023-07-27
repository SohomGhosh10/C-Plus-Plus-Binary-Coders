#include <iostream>
using namespace std;

void change(string); // function prototype

int main()
{
    string str = "Happy";
    change(str);
    cout << str << endl;

    return 0;
}

void change(string str)
{
    str = "Sad";
}
