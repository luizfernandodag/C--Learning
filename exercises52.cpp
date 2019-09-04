#include <iostream>
#include <deque>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    deque<string> names;
    ifstream nameList;
    nameList.open("names.txt");
    string line;
    if(nameList.is_open())
    {
    while (!nameList.eof()) {
        getline(nameList, line);
        string::iterator it = line.end();
        --it;

       // cout << line << endl;
        size_t pos = line.find(' ');
        string name = line.substr(0,pos-1);
       // cout << pos << endl;
       // cout << name  << endl;
        if (*it == 'p')
           names.push_front(name);
        else
           names.push_back(name);
    }
    }
    else
    {
        cout << "not open";
    }
    cout << endl;
    nameList.close();
    deque<string>::iterator it = names.begin();
    while (it != names.end()) {
        cout << *it << endl;
        ++it;
    }
    return 0;
}
