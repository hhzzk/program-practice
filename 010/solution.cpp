#include<iostream>

using namespace std;

int main()
{
    string line;
    int count = 0;
    int i = 0;

    cin >> line;

    for(i = 0; i < line.length(); i++)
    {
        if(line[i] >= 'A' && line[i] <= 'Z')
            count++;
        if(line[i] >= 'a' && line[i] <= 'z')
            count++;
    }

    cout << count;

}
