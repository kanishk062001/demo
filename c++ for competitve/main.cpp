#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    cout<< "enter input";
    int a;
    cin>>a;
    cout<<" this is "<<a;

    for (const string& word : msg)
    {
        cout << word << " \n";
    }
    cout << endl;
    updated the code 
}
