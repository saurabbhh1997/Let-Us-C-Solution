#include <stdio.h>
#include <conio.h>
void main()
{

    int matchsticks = 21, user, computer;
    // clrscr();
    printf("Do not enter Invalid Numbers.\nNumbers above 4 are invalid.");

    printf("\nIf you do so, the computer automatically wins.");

    while (matchsticks >= 1)
    {

        printf("\nNumber of matchsticks available right now is %d.", matchsticks);

        printf("\n\nYour Turn...\n\n\n");

        printf("\nPick up the matchstick(s)-- (1-4): ");
        scanf("%d", &user);

        if (user > 4)

        {
            printf("Invalid Selection");
            break;
        }

        computer = 5 - user;

        printf("\nComputer's Turn..\n");

        if (matchsticks == 1)

            break;
        printf("\nComputer chooses:%d", computer);
        matchsticks = matchsticks - user - computer;
        continue;
    }

    matchsticks--;
    printf("\nComputer Wins");
    getch();
}