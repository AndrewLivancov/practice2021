#include <stdio.h>
#include <stdlib.h>

struct sPoint {
    int x,y;
} p;

int main()

{
    struct sPoint a;
    a.y = 9;
    p.x = 7;
    printf("%d\n", a.y);
    return 0;
}
