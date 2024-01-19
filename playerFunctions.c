// player - global variable

void setDefaultPlayerValues()
{
    player.hasPlayerStartedGame = 0;
    player.health = 1000;
    player.power = 2;
    player.def = 10;
    player.critChance = .2;
    player.critPower = 1.1;
    player.level = 1;
    player.nickname = "Zyabrik10";
}

void printAllPlayerValues()
{
    printf("\n");
    printf("Nickname: %s\n", player.nickname);
    printf("Health: %d\n", player.health);
    printf("Power: %.f\n", player.power);
    printf("Defense: %.f\n", player.def);
    printf("Critical chance: %.2f%%\n", (float)(player.critChance * 100));
    printf("Critical power multiplier: x%.2f\n", player.critPower);
    printf("Level: %d\n", player.level);
    printf("\n");
}

float getPlayerHealth()
{
    return player.health;
}

void setPlayerHealth(int health)
{
    player.health = health;
}

char *getPlayerNickname()
{
    return player.nickname;
}

void setPlayerNickname(char *nickname)
{
    player.nickname = nickname;
}