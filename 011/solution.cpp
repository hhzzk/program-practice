#include<iostream>

using namespace std;

int main()
{
    string number;
    int i = 0;

    cin >> number;

    for(i = number.length()-1; i >= 0; i--)
    {
        cout << number[i];
    }

    return 0;
}
