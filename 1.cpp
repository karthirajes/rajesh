#include <iostream>
#include <string>
using namespace std;
void appendDemo(string str)
{
    str.append("GeeksforGeeks");
    cout << "Using append() : ";
    cout << str << endl;
}
   main()
{
    string str("World of ");
    cout << "Original String : " << str << endl;
    appendDemo(str);
    return 0;
}
