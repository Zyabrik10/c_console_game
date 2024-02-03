#include "./draw.c"
#include "./choices.c"
#include "./histories.c"

void level_2_bossFighting()
{
    while (1)
    {
        Enemy basilisk = createEnemy("Basilisk", 10);
        Enemy harpiis = createEnemy("Harpiis", 15);
        Enemy sorcerer = createEnemy("Sorcerer", 20);

        Enemy boss = createEnemy("The Abyssal Sandstorm Leviathan", 30);
        Enemy enemies[] = {basilisk, harpiis, sorcerer};

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

void level_2()
{
    Enemy basilisk = createEnemy("Basilisk", 10);
    Enemy harpiis = createEnemy("Harpiis", 15);
    Enemy sorcerer = createEnemy("sorcerer", 20);

    Enemy enemies_level_2_history_2[] = {basilisk};
    Enemy enemies_level_2_history_3[] = {harpiis};
    Enemy enemies_level_2_history_4[] = {sorcerer};

    print_level_2_history_1();

    print_level_2_choice_1();
    make_choice_level_2_history_1();

    print_level_2_history_2_start();
    drawBasilisk();
    fighEnemies(enemies_level_2_history_2, 1, 5);
    print_level_2_history_2_end();

    print_level_2_choice_2();
    make_choice_level_2_history_2();

    print_level_2_history_3_start();
    drawHarpiis();
    fighEnemies(enemies_level_2_history_3, 1, 10);
    print_level_2_history_3_end();

    print_level_2_choice_3();
    make_choice_level_2_history_3();

    print_level_2_history_4_start();
    drawSorcerer();
    fighEnemies(enemies_level_2_history_4, 1, 10);
    print_level_2_history_4_end();

    print_level_2_history_5_start();
    drawLeviathan();
    level_2_bossFighting();
    print_level_2_history_5_end();
}