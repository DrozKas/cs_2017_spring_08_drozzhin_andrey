#include <stdio.h>

int main()
{
    int t, d, m;
    d = 17;
    m = 8;
    printf("%d, %d\n" ,d ,m);
    t = m;
    m = d;
    d = t;
    printf("%d, %d\n" ,d ,m);
    
    return 0;
}

