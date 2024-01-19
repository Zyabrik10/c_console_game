#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./enum.c"
#include "./struct.c"
#include "./playerFunctions.c"

char nickname[10];

int setPlayerName(char nickname[]);

int main()
{

    // Start
    printf("Welcome to the GameAdventure!\n");

    // Create structure of Player with default values
    // player - global variable
    setDefaultPlayerValues();

    setPlayerName(nickname);

    printAllPlayerValues();
}

int setPlayerName(char nickname[])
{
    while (1)
    {
        printf("Please choose your name (up to 10 letters): ");

        scanf("%s", nickname);

        if (strlen(nickname) >= 10)
        {
            printf("\nYour name can`t consists of more than 10 letters\n\n");
            continue;
        }

        setPlayerNickname(nickname);
        break;
    }
}