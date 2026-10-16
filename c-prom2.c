#include <stdio.h>

int main()
{
    int questions, time, submitted;

    scanf("%d", &questions);
    scanf("%d", &time);
    scanf("%d", &submitted);

    if (questions >= 1 && time > 0 && submitted == 0)
        printf("Submission Allowed");
    else
        printf("Submission Not Allowed");

    return 0;
}
output:

Questions Answered: 45


Remaining Time: 12


Already Submitted: 0


Submission Allowed


 