Enemy createEnemy(char *name, int level)
{
    Enemy enemy;
    enemy.enemy_level = level;
    enemy.name = name;
    enemy.health = enemy.enemy_level * 10;
    enemy.power = 1 * enemy.enemy_level;
    enemy.def = 1 * enemy.enemy_level;
    enemy.defChance = 0.2 * (enemy.enemy_level + 1) * 0.1;
    enemy.critChance = .1 * enemy.enemy_level;
    enemy.critPower = 1.1 * enemy.enemy_level;

    return enemy;
}

void increaseEnemy(Enemy *enemy, float increment)
{
    enemy->enemy_level *= increment;
    enemy->health = enemy->enemy_level * 10;
    enemy->power = 1.1 * enemy->enemy_level;
    enemy->def = 0.2 * enemy->enemy_level;
    enemy->defChance = .3 * enemy->enemy_level;
    enemy->critChance = .1 * enemy->enemy_level;
    enemy->critPower = 1.05 * enemy->enemy_level;
}

void chanceToIncreaseEnemy(Enemy *enemy)
{
    if (randInt(0, 100) / 100 <= 100)
        increaseEnemy(enemy, 1.5);
}