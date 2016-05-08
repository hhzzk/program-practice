#include<iostream>
#include<string>

using namespace std;

int main()
{
    string line;
    size_t found;
    string world;

    getline(cin, line);

    found = line.find_last_of(" ");
    world = line.substr(found+1);

    cout << world.length() << endl;

    return 0;
}
