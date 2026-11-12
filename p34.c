#include <stdio.h>
int max_of_four(int a, int b, int c, int d)
{
    if(a>b&&a>c&&a>d)
    return a;
    else if(b>a&&b>c&&b>d)
    return b;
    else if(c>a&&c>b&&c>d)
    return c;
    else
    return d;
}
int main() {
    int a=1, b=2, c=3, d=4;
    int ans = max_of_four(a, b, c, d);
    printf("Maximum element is = %d", ans);
    
    return 0;
}
