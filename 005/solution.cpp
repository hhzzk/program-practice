#include<iostream>
#include<string>
#include<map>

using namespace std;

int get_16_times(int times)
{
    int i = 0;
    int product = 1;

    if(times == 0)
        return 1;

    for(i = 0; i < times; i++)
        product *= 16;

    return product;
}

int main()
{
    string line;
    int i = 0;
    int j = 0;
    int result = 0;
    int number = 0;
    map<char, int> hexmap;

    hexmap['0'] = 0;
    hexmap['1'] = 1;
    hexmap['2'] = 2;
    hexmap['3'] = 3;
    hexmap['4'] = 4;
    hexmap['5'] = 5;
    hexmap['6'] = 6;
    hexmap['7'] = 7;
    hexmap['8'] = 8;
    hexmap['9'] = 9;
    hexmap['A'] = 10;
    hexmap['B'] = 11;
    hexmap['C'] = 12;
    hexmap['D'] = 13;
    hexmap['E'] = 14;
    hexmap['F'] = 15;

    getline(cin, line);
    for(i = line.length()-1; i >= 2; i--)
    {
        number = hexmap[line[i]];
        result += number * get_16_times(j++);
    }

    cout << result ;
}
