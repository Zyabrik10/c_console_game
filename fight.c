void attackEnemy(Enemy *enemy)
{
    bool willCrit = randInt(0, 100) / 100 < player.critChance;
    bool willEnemyDefend = randInt(0, 100) / 100 < enemy->defChance;

    float def = willEnemyDefend ? enemy->def : 0;
    float power = willCrit ? player.critPower * player.power : player.power;
    float total = power - def;

    if (total < 0)
        total = power;

    enemy->health -= total;

    printf("\n %s attacked %s with %f power and %f crits and %s %f def - %f", player.name, enemy->name, player.power, player.critPower, enemy->name, enemy->def, total);
    char a;
}

void attackPlayer(Enemy *enemy)
{
    bool willCrit = randInt(0, 100) / 100 < enemy->critChance;
    bool willPlayerDefend = randInt(0, 100) / 100 < player.defChance;

    float def = willPlayerDefend ? player.def : 0;
    float power = willCrit ? enemy->critPower * enemy->power : player.power;
    float total = power - def;

    if (total < 0)
        total = power;

    player.health -= total;

    printf("\n %s attacked %s with %f power and %f crits and %s %f def - %f\n", enemy->name, player.name, enemy->power, enemy->critPower, player.name, player.def, total);
}

void counterAttackEnemy(Enemy *enemy)
{
    bool willCrit = randInt(0, 100) / 100 < player.critChance;

    float power = willCrit ? player.critPower * player.power : player.power;
    float total = power * randInt(2, 4);

    if (total < 0)
        total = power;

    enemy->health -= total;

    printf("\n Counter Attack - %f\n", total);
}

void defendPlayer(Enemy *enemy)
{
    if (randInt(0, 100) / 100 >= 0.6)
    {
        counterAttackEnemy(enemy);
        return;
    }

    bool willCrit = randInt(0, 100) / 100 < enemy->critChance;

    float power = willCrit ? enemy->critPower * enemy->power : enemy->power;

    int k = randInt(2, 3);
    float total = power - player.def * k;

    if (total < 0)
        total = power - player.def;

    player.health -= total;

    printf("\n Total def - %f\n", total);
}

void printFightMenu()
{
    printf("\n -- Fighting Menu --\n");
    printf("\n Fight (%.f dam) - 1\n", player.power);
    printf(" Defence (%.f def) - 2\n\n", player.def);
}

void makeFightMove(Enemy *enemy)
{
    int comand;
    printFightMenu();

    while (1)
    {
        comand = scanPlayerInput();

        switch (comand)
        {
        case 1:
            printf("\n ------------------------------ Current Status ------------------------------\n\n");
            attackEnemy(enemy);
            attackPlayer(enemy);
            return;
        case 2:
            printf("\n ------------------------------ Current Status ------------------------------\n\n");
            defendPlayer(enemy);
            return;
        }
    }
}

bool fightEnemy(Enemy *enemy)
{
    printf("\n -.-.-.-.-.-.-.-.-.-.-.-.-.-.- Fighting -.-.-.-.-.-.-.-.-.-.-.-.-.-.-\n");

    bool hasWon = false;

    while (1)
    {
        if (player.health <= 0)
            break;

        if (enemy->health <= 0)
        {
            hasWon = true;
            break;
        }

        makeFightMove(enemy);
        printAllPlayerValues();
        printAllEnemyValues(enemy);
        printf("\n ----------------------------------------------------------------------------\n");
    }

    if (hasWon)
    {
        drawWon();
        if (pre_level % 5 == 0)
        {
            increasePlayerLevel(1);
            pre_level = 0;
        }
        pre_level++;
    }
    else
    {
        drawLost();
        restorePlayerHealth();
    }

    printf("\n .-.-.-.-.-.-.-.-.-.-.-.-.-.-. Fighting End .-.-.-.-.-.-.-.-.-.-.-.-.-.-.\n");

    return hasWon;
}

void defaultEnemyEncounterMenu()
{
    printf(" Choose what to do:\n\n");
    printf("  Fight - 1\n");
    printf("  Try to run - 2\n");
    printf("  Player statystics - 3\n\n");
}

bool tryToRun(Enemy *enemy)
{
    if ((int)rand() > 16000)
    {
        printf("\n You did it\n");
        return false;
    }
    else
        return fightEnemy(enemy);
}

bool makeEnemyChoice(Enemy *enemy)
{
    int comand;
    defaultEnemyEncounterMenu();

    while (1)
    {
        comand = scanPlayerInput();

        switch (comand)
        {
        case 1:
            return fightEnemy(enemy);
        case 2:
            return tryToRun(enemy);
        case 3:
            printAllPlayerValues();
        }
    }
}

bool enconterEnemy(Enemy *enemy, bool hasEnhaceChance)
{
    printf("\n\n ***************************** ENCOUNTER *****************************\n");
    printf("\n !!! You have just encountered %s !!!\n\n", enemy->name);
    if (hasEnhaceChance)
        chanceToIncreaseEnemy(enemy);
    printAllEnemyValues(enemy);
    return makeEnemyChoice(enemy);
}

void fighEnemies(Enemy enemies[], int enemiesVarityNumber, int enemiesEncounterNumber)
{
    for (int i = 0; i < enemiesEncounterNumber; i++)
    {
        printf("\n Enemy: %d/%d", i + 1, enemiesEncounterNumber);

        int randomEnemyIndex = randInt(0, enemiesVarityNumber - 1);

        Enemy enemy = enemies[randomEnemyIndex];
        bool hasWon = enconterEnemy(&enemy, true);

        if (!hasWon)
        {
            i = -1;
            printf("\n You lost! Try again\n");
        }
    }
}