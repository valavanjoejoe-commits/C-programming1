#include <stdio.h>

int main()
{
    int P, R, T;
    float interest, amount, discount, settlement;

    scanf("%d", &P);
    scanf("%d", &R);
    scanf("%d", &T);

    interest = (P * R * T) / 100.0;
    amount = P + interest;
    discount = interest * 0.02;
    settlement = amount - discount;

    printf("%.2f\n", interest);
    printf("%.2f\n", amount);
    printf("%.2f\n", discount);
    printf("%.2f\n", settlement);

    return 0;
}

output:



100


1


10


10.00


110.00


0.20


109.80

