#include<stdio.h>

int main()
{
    float number;
    int   i;
    int   tmp;

    scanf("%f", &number);

    i = int(number);
    tmp = int((number - float(i)) * 10);
    if(tmp >= 5)
        printf("%d", i+1);
    else
        printf("%d", i);

    return 0;
}
