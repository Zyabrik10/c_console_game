#include "./draw.c"
#include "./choices.c"
#include "./histories.c"

void level_1_bossFighting()
{
    while (1)
    {
        Enemy wareWolf = createEnemy("WareWolf", 1);
        Enemy goblin = createEnemy("Goblin", 2);
        Enemy serpent = createEnemy("Serpent", 3);

        Enemy boss = createEnemy("The Cry Dragon", 10);
        Enemy enemies[] = {wareWolf, goblin, serpent};

        bool hasWon = enconterEnemy(&boss, false);

        int enemiesNumber = 5;

        if (hasWon)
        {
            drawWon();
            increasePlayerLevel(2);
            return;
        }

        printf("\nTry to gain more exp by killing %d enemies in a row\n", enemiesNumber);

        restorePlayerHealth();
        fighEnemies(enemies, 3, enemiesNumber);
    }
}

void level_1()
{
    Enemy wareWolf = createEnemy("WareWolf", 1);
    Enemy goblin = createEnemy("Goblin", 2);
    Enemy serpent = createEnemy("Serpent", 3);

    Enemy enemies_level_1_history_2[] = {wareWolf};
    Enemy enemies_level_1_history_3[] = {goblin};
    Enemy enemies_level_1_history_4[] = {serpent};

    print_level_1_history_1();

    print_level_1_choice_1();
    make_choice_level_1_history_1();

    print_level_1_history_2_start();
    drawWerewolf();
    fighEnemies(enemies_level_1_history_2, 1, 10);
    print_level_1_history_2_end();

    print_level_1_choice_2();
    make_choice_level_1_history_2();

    print_level_1_history_3_start();
    drawGoblin();
    fighEnemies(enemies_level_1_history_3, 1, 5);
    print_level_1_history_3_end();

    print_level_1_choice_3();
    make_choice_level_1_history_3();

    print_level_1_history_4_start();
    drawSerpent();
    fighEnemies(enemies_level_1_history_4, 1, 5);
    print_level_1_history_4_end();

    print_level_1_history_5_start();
    drawDragon();
    level_1_bossFighting();
    print_level_1_history_5_end();
}