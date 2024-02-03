#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#include "./globalVariables.c"
#include "./print.c"
#include "./functions/functions.c"
#include "./fight.c"
#include "./levels/levels.c"

int setPlayerGameName();
void printHistory();
void initGame();

void main()
{
    initGame();

    if (player.game_level == 1)
    {
        level_1();
        printf("\n You have complited 1 level\n");
        setPlayerGameLevel(2);
        saveGameData();
    }

    if (player.game_level == 2)
    {
        level_2();
        printf("\n You have complited 2 level\n");
        setPlayerGameLevel(3);
        saveGameData();
    }

    if (player.game_level == 3)
    {
        level_3();
        printf("\n You have complited 3 level\n");
        setPlayerGameLevel(4);
        saveGameData();
    }

    if (player.game_level >= 4)
    {
        printf("\n You have complited this story\n");
        resetPlayerValues();
        return;
    }
}

int setPlayerGameName()
{
    while (1)
    {
        printf("\n ------------------------------------------");
        printf("\n Please choose your name (up to 10 letters): ");
        scanf("%s", name);
        printf(" ------------------------------------------\n");

        if (strlen(name) >= 10)
        {
            printf("\n Your name can`t consists of more than 10 letters\n\n");
            continue;
        }

        setPlayerName(name);
        break;
    }
}

void printHistory()
{
    printf("\n Once upon a time, in the magnificent kingdom of Eldoria, there lived a brave and joyful knight known as Sir %s Lancelot.\n He was revered by all and had always been eager to embark on daring quests to protect the realm from any danger that threatened its peace and harmony. (Press enter)\n", player.name);
    char a;
    scanf("%c", &a);
    scanf("%c", &a);
    // ----------------------------------------------------------------
    printf(" One fateful day, as the sun shone brightly over Eldoria, news spread like wildfire that the beloved princess, Princess Isabella, had been kidnapped by a fearsome dragon known as Drakon.\n The entire kingdom mourned her disappearance, as she was not only beautiful but kind-hearted and loved by all. (Press enter)\n");
    makePause();
    // ----------------------------------------------------------------
    printf(" Sir %s Lancelot, fueled by a newfound determination, quickly mounted his trusted steed, Thunderbolt, and set off on an epic journey to rescue the princess from the clutches of the menacing dragon.\n  Along his path, he encountered numerous challenges and obstacles, but his unwavering belief in bravery and justice propelled him forward. (Press enter)\n", player.name);
    makePause();
    // ----------------------------------------------------------------
    printf(" You will have to go through three stages before you get to the Dragon: The Cry Forest, The Desiers Field, The Dragon Island (Press enter)\n", player.name);
    makePause();
}

void initGame()
{
    srand(time(NULL));
    setDefaultPlayerValues();

    drawGameName();
    if (doesFileExist("GameData.txt"))
    {
        actualizationGameData();
        printf("\n Welcome back, Sir %s Lancelot\n\n", player.name);
        askAboutMenu();
    }
    else
    {
        saveGameData(); // will create a file GameData.txt
        setPlayerGameName();
        saveGameData();
        printHistory();
    }
}