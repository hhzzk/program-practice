#include <stdio.h>
int main()
{
    int num, i;
    scanf("%d", &num);

    for(i = 2; i <= num; i++)
    {
        while(num % i == 0)
        {
            num /= i;
            if(num != 1)
            {
                printf("%d ", i);
            }
            else
            {
                printf("%d ", i);
                                                }
            }
    }
    return 0;
}
