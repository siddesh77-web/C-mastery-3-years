#include<stdio.h>
int sum(void);
int main(void)
{
    int c;
    c = sum();
    printf("sum=%d\n", c);
    return 0;
}

int sum(void)
{
    int a=10,b=10,c;
    c=a+b;
    return c;
}
