#include "./draw.c"
#include "./choices.c"
#include "./histories.c"

void level_3_bossFighting()
{
    while (1)
    {
        Enemy wareWolf = createEnemy("WareWolf", 1);
        Enemy goblin = createEnemy("Goblin", 2);
        Enemy serpent = createEnemy("Serpent", 3);

        Enemy basilisk = createEnemy("Basilisk", 10);
        Enemy harpiis = createEnemy("Harpiis", 15);
        Enemy sorcerer = createEnemy("sorcerer", 20);

        Enemy draconicGuard = createEnemy("the Molten Drake Sentinel", 50);
        Enemy the_Inferno_Scale_Colossus = createEnemy("the Inferno Scale Colossus", 75);

        Enemy boss = createEnemy("The Drakon", 100);
        Enemy enemies[] = {wareWolf, goblin, serpent, basilisk, harpiis, sorcerer, draconicGuard, the_Inferno_Scale_Colossus};

        bool hasWon = enconterEnemy(&boss, false);

        int enemiesNumber = 10;

        if (hasWon)
        {
            printf("\nYou have won\n");
            increasePlayerLevel(2);
            return;
        }

        printf("\nTry to gain more exp by killing %d enemies in a row\n", enemiesNumber);

        restorePlayerHealth();
        fighEnemies(enemies, 8, enemiesNumber);
    }
}

void level_3()
{
    Enemy draconicGuard = createEnemy("the Molten Drake Sentinel", 50);
    Enemy the_Inferno_Scale_Colossus = createEnemy("the Inferno Scale Colossus", 75);

    Enemy enemies_level_3_history_2[] = {draconicGuard};
    Enemy enemies_level_3_history_3[] = {the_Inferno_Scale_Colossus};

    print_level_3_history_1();

    print_level_3_choice_1();
    make_choice_level_3_history_1();

    print_level_3_history_2_start();
    drawDragon3();
    fighEnemies(enemies_level_3_history_2, 1, 1);
    print_level_3_history_2_end();

    print_level_3_choice_2();
    make_choice_level_3_history_2();

    print_level_3_history_3_start();
    drawDragon3();
    fighEnemies(enemies_level_3_history_3, 1, 1);
    print_level_3_history_3_end();

    print_level_3_history_5_start();
    drawDragon();
    level_3_bossFighting();
    print_level_3_history_5_end();
}