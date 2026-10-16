#include <stdio.h>

int main() {
    int a, b, c, car;

    scanf("%d %d %d %d", &a, &b, &c, &car);

    if (a % car == 0)
        printf("Car 1 goes into road A");
    else if (b % car == 0)
        printf("Car 1 goes into road B");
    else if (c % car == 0)
        printf("Car 1 goes into road C");
    else
        printf("No path exists");

    return 0;
}
 output:

 243


136


567


17


Car 1 goes into road B

