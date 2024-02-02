#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

#include "./enum.c"
#include "./struct.c"
#include "./globalVariables.c"
#include "./math.c"
#include "./fileFunctions.c"
#include "./print.c"
#include "./enemyFunctions.c"
#include "./playerFunctions.c"
#include "./fight.c"
#include "./level_1.c"
#include "./level_2.c"
#include "./level_3.c"

int setPlayerGameName();
void printHistory();
void initGame();

void main()
{
    initGame();

    if(player.game_level == 1){
        resetPlayerValues();
        level_1();
        printf("\nYou have complited 1 level\n");
        setPlayerGameLevel(2);
        saveGameData();
    }

    if (player.game_level == 2){
        level_2();
        printf("\nYou have complited 2 level\n");
        setPlayerGameLevel(3);
        saveGameData();
    }

    if (player.game_level == 3){
        level_3();
        printf("\nYou have complited 2 level\n");
        setPlayerGameLevel(4);
        saveGameData();
    }

    if (player.game_level >= 4){
        printf("\nYou have complited this story\n");
        return;
    }
}

int setPlayerGameName()
{
    while (1)
    {
        printf("Please choose your name (up to 10 letters): ");

        scanf("%s", name);

        if (strlen(name) >= 10)
        {
            printf("\nYour name can`t consists of more than 10 letters\n\n");
            continue;
        }

        setPlayerName(name);
        break;
    }
}

void printHistory(){
        printf("\nOnce upon a time, in the magnificent kingdom of Avaloria, there lived a brave and joyful knight known as Sir %s Lancelot. He was revered by all and had always been eager to embark on daring quests to protect the realm from any danger that threatened its peace and harmony.", player.name);
        makePause();
        // ----------------------------------------------------------------
        printf("One fateful day, as the sun shone brightly over Avaloria, news spread like wildfire that the beloved princess, Princess Isabella, had been kidnapped by a fearsome dragon known as Drakon. The entire kingdom mourned her disappearance, as she was not only beautiful but kind-hearted and loved by all.");
        makePause();
        // ----------------------------------------------------------------
        printf("Sir %s Lancelot, fueled by a newfound determination, quickly mounted his trusted steed, Thunderbolt, and set off on an epic journey to rescue the princess from the clutches of the menacing dragon. Along his path, he encountered numerous challenges and obstacles, but his unwavering belief in bravery and justice propelled him forward.", player.name);
        makePause();
        // ----------------------------------------------------------------
        printf("You will have to go through three stages before you get to the Dragon: The Cry Forest, The Desiers Filed, The Dragon Island", player.name);
        makePause();
}

void initGame(){
    srand(time(NULL));
    setDefaultPlayerValues();

    if (doesFileExist("GameData.txt")){
        actualizationGameData();
        printf("\n| Welcome back, Sir %s Lancelot, to the GameAdventure! |\n\n", player.name);
        askAboutMenu();
    }else{
        printf("\n| Welcome to the GameAdventure! |\n");
        saveGameData(); // will create a file GameData.txt
        setPlayerGameName();
        saveGameData();
        printHistory();
    }

}