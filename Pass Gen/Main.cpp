#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <ctime>

#include "new.cpp"
#include "get.cpp"
#include "delete.cpp"
using namespace std;

string randomPass(int);

int main()
{
    string action;
    cout << "Hello what would you like to do?" << endl;
    cout << "New(pass), Get(pass), Del(delete), quit" << endl;
    cin >> action;
    transform(action.begin(), action.end(), action.begin(), ::tolower);
    while(action != "quit"){

    if(action == "new")
    {
        newstring();
    }
    else if(action == "get")
    {
        getstring();

    }
    else if(action == "del")
    {
        delStr();
    }
    else
        cout << "action not identified" << endl;

    cout << "New(pass), Get(pass), Delete(del), quit" << endl;
    cin >> action;
    transform(action.begin(), action.end(), action.begin(), ::tolower);
    }
}
