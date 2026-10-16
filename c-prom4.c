#include <stdio.h>

int main()
{
    float mileage;
    int petrol, distance;

    scanf("%f", &mileage);
    scanf("%d", &petrol);
    scanf("%d", &distance);

    if (mileage * petrol >= distance)
        printf("Can reach");
    else
        printf("Cannot reach");

    return 0;
}

output:

30


10


140


99



171


9