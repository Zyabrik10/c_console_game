int getPlayerHealth()
{
    return player.health;
}

void setPlayerHealth(int health)
{
    player.health = health;
}

float getPlayerPower()
{
    return player.power;
}

void setPlayerPower(float power)
{
    player.power = power;
}

float getPlayerDef()
{
    return player.def;
}

void setPlayerDef(float def)
{
    player.def = def;
}

float getPlayerDefChance()
{
    return player.defChance;
}

void setPlayerDefChance(float defChance)
{
    player.defChance = defChance;
}

float getPlayerCritChance()
{
    return player.critChance;
}

void setPlayerCritChance(float critChance)
{
    player.critChance = critChance;
}

float getPlayerCritPower()
{
    return player.critPower;
}

void setPlayerCritPower(float critPower)
{
    player.critPower = critPower;
}

int getPlayerGameLevel()
{
    return player.game_level;
}

void setPlayerGameLevel(int level)
{
    player.game_level = level;
}

int getPlayerPlayerLevel()
{
    return player.player_level;
}

void setPlayerPlayerLevel(int level)
{
    player.player_level = level;
}

char *getPlayerName()
{
    return player.name;
}

void setPlayerName(char *name)
{
    player.name = name;
}

void increasePlayerLevel(int levelPlus)
{
    printf("\n--- Your level increased to %d ---\n", player.player_level + levelPlus);
    player.player_level += levelPlus;
    player.health = 100 * (player.player_level + 1) * 0.5;
    player.power = 2 * (player.player_level + 1) * .5;
    player.def = player.player_level * .5;
    player.defChance = player.player_level * .01;
    player.critChance = .2 + (player.player_level * .01);
    player.critPower = 1.1 + (player.player_level * .1);
    saveGameData();
}

void resetPlayerValues()
{
    player.game_level = 1;
    player.player_level = 1;
    player.health = 100;
    player.power = 2;
    player.def = .5;
    player.defChance = 0.1;
    player.critChance = .2;
    player.critPower = 1.1;
    saveGameData();
}

void setDefaultPlayerValues()
{
    player.game_level = 1;
    player.player_level = 1;
    player.health = 100;
    player.power = 2;
    player.def = .5;
    player.defChance = 0.1;
    player.critChance = .2;
    player.critPower = 1.1;
    player.name = "Zyabrik10";
}

void exitGame()
{
    saveGameData();
    exit(0);
}

void printMenu()
{
    printf(" Exit - 1\n");
    printf(" Player statistics - 2\n");
    printf(" Start game on level %d - 3\n", player.game_level);
}

int scanPlayerInput()
{
    char a;

    printf("\r > ");
    scanf("%c", &a);
    return (int)a - 48;
}

void askAboutMenu()
{
    int comand;
    printMenu();

    while (1)
    {
        comand = scanPlayerInput();

        switch (comand)
        {
        case 1:
            exitGame();
            return;
        case 2:
            printAllPlayerValues();
            break;
        case 3:
            return;
        }
    }
}

void restorePlayerHealth()
{
    player.health = 100 * (player.player_level * .5);
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
            printf("\n Your name can`t consist of more than 10 letters\n\n");
            continue;
        }

        setPlayerName(name);
        break;
    }
}
