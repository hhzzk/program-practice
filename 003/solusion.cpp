#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> arr;
    int arr_num = 0;
    int i = 0;
    int temp = 0;

    cin >> arr_num;
    for(i = 0; i < arr_num; i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }

    sort(arr.begin(), arr.end());

    for(i = 1; i < arr.size(); i++)
    {
        if(arr[i] == arr[i-1])
        {
            arr.erase(arr.begin()+i);
        }
    }
    for(auto i : arr)
        cout << i << endl;

    return 0;
}
