#include <stdio.h>
int main()
{
    int m, i, sum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=1; i <= m; ++i)
    {
        sum += i;   // sum = sum+i;
    }

    printf("Sum = %d",sum);

    return 0;
}
