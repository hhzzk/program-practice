#include<iostream>
#include<string>

using namespace std;

int main()
{
    int    count = 0;
    string line;
    string cha;
    char   c;
    char   c1;

    getline(cin, line);
    cin >> cha;
    c = toupper(cha[0]);

    for(auto c1 : line )
    {
        c1 = toupper(c1);
        if(c == c1)
            count ++;
    }

    cout << count << endl;
}

