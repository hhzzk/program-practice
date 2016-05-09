#include<stdio.h>

int main()
{
    int arr[100];
    int num = 0;
    int i = 0;
    int index = 0;
    int value = 0;

    scanf("%d", &num);

    for(i = 0; i < 100; i++)
    {
        arr[i] = -1;
    }

    for(i = 0; i < num; i++)
    {
        scanf("%d %d", &index, &value);
        if(arr[index] == -1)
        {
            arr[index] = value;
        }
        else
        {
            arr[index] += value;
        }
    }

    for(i = 0; i < num; i++)
    {

        if(arr[i] != -1)
            printf("%d %d\n", i, arr[i]);
    }
}
