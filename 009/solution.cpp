#include<iostream>

using namespace std;

int main()
{
    int arr[10] = {0};
    int number = 0;
    int tmp = 0;

    cin >> number;
    while(number)
    {
        tmp = number % 10;
        number /= 10;

        if(arr[tmp] == 0)
        {
            cout << tmp;
            arr[tmp] = 1;
        }
    }

    return 0;
}
