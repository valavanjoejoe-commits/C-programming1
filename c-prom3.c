#include <stdio.h>

int main()
{
    int gold, x, y;
    int ben, blackbeard, remaining, pirate;

    scanf("%d", &gold);
    scanf("%d", &x);
    scanf("%d", &y);

    ben = gold * x / 100;
    remaining = gold - ben;
    blackbeard = remaining * y / 100;
    remaining = remaining - blackbeard;
    pirate = remaining / 3;

    printf("%d\n", ben);
    printf("%d\n", blackbeard);
    printf("%d\n", pirate);

    return 0;
}
 output:
 
 729


65


87


473


222


11