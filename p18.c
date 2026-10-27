#include <stdio.h>

main()
{
    int i, *ptr, sum = 0;
    ptr = &i;

    for (*ptr = 0; *ptr <= 10; (*ptr)++)
    {
        printf("%d\n", *ptr);
        sum = sum + *ptr;
    }

    printf("sum = %d\n", sum);
}
