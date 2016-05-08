#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    vector<string> vec;
    string tmp, tmp1;
    int m = 2;
    int i = 0;
    int j = 0;

    cin >> tmp >> tmp1;
    vec.push_back(tmp);
    vec.push_back(tmp1);

    for(m=0; m<2; m++)
    {
        tmp = vec[m];
        for(i = 0; i < tmp.length(); i++)
        {
            if(i != 0 && i%8 == 0)
                cout << endl;
            cout << tmp[i];
        }
        if(i % 8 != 0)
        {
            for(j = 0; j < 8 - i%8; j++)
            {
                cout << 0 ;
            }
        }
        cout << endl;
    }
}
