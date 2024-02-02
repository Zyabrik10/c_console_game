void printAllPlayerValues()
{
    printf("\n");
    printf("name: %s\n", player.name);
    printf("Health: %.2f\n", player.health);
    printf("Player level: %d\n", player.player_level);
    printf("Power: %.2f\n", player.power);
    printf("Defense: %.2f\n", player.def);
    printf("Defense chance: %.2f%%\n", (float)(player.defChance * 100));
    printf("Critical chance: %.2f%%\n", (float)(player.critChance * 100));
    printf("Critical power multiplier: x%.2f\n", player.critPower);
    printf("Game level: %d\n", player.game_level);
    printf("Pre level: %d\n", pre_level);
    printf("\n");
}

void printAllEnemyValues(Enemy* enemy){
    printf("\n");
    printf("name: %s\n", enemy -> name);
    printf("Health: %.2f\n", enemy -> health);
    printf("Power: %.2f\n", enemy -> power);
    printf("Defense: %.2f\n", enemy -> def);
    printf("Defense chance: %.2f%%\n", (float)(enemy -> defChance * 100));
    printf("Critical chance: %.2f%%\n", (float)(enemy -> critChance * 100));
    printf("Critical power multiplier: x%.2f\n", enemy -> critPower);
    printf("Enemy level: %d\n", enemy -> enemy_level);
    printf("\n");
}