#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int user_guess, random_num;
    int tries = 5;
    _Bool guesses = 0;

    srand(time(NULL));
    random_num = rand() % 20 + 1;
    printf("Random Number: %d\n.", random_num);
    while (guesses == 0)
    {
        //Checking whether the user has enough attempts
        if (tries < 1)
        {
            printf("Sorry, you have run out of attempts. The random number was %d.\n", random_num);
            break;
        }
        // User Input and Prompt
        printf("You have %d tries left.\n", tries);
        printf("Enter a guess: ");
        scanf("%d", &user_guess);

        //Checking the user's guess
        if (user_guess > 20 || user_guess < 0)
        {
            printf("The guess you provided was out of the range. Try a number between 0 and 20.\n");
        }
        else if (user_guess == random_num)
        {
            printf("Congratulations. You guessed it!\n");
            guesses = 1;
        }
        else if (user_guess > random_num)
        {
            printf("Sorry, %d is wrong. My number is less than that.\n", user_guess);
            --tries;
        }
        else
        {
            printf("Sorry, %d is wrong. My number is greater than that.\n", user_guess);
            --tries;
        }
    }

    return 0;
}