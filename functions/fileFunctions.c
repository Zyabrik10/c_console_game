bool doesFileExist(char* filename){
    FILE* file = fopen(filename, "r");

    if (file == NULL) {
        fclose(file);
        return false;
    }

    fclose(file);
    return true;
    
}

void actualizationGameData(){
    GameDataFile = fopen("GameData.txt", "r");

    float health; 
    float power;
    float def;
    float defChance;
    float critChance;
    float critPower;
    int game_level;
    int player_level;

    fscanf(GameDataFile, "name %s\nhealth %f\npower %f\ndef %f\ndefChance %f\ncritChance %f\ncritPowers %f\nplayer_level %d\ngame_level %d\0", name, &health, &power, &def, &defChance, &critChance, &critPower, &player_level, &game_level);

    player.health = health;
    player.power = power;
    player.def = def;
    player.defChance = defChance;
    player.critChance = critChance;
    player.critPower = critPower;
    player.player_level = player_level;
    player.game_level = game_level;
    player.name = name;

    fclose(GameDataFile);
}

void saveGameData(){
    GameDataFile = fopen("GameData.txt", "w+");

    fprintf(GameDataFile, "name %s\nhealth %f\npower %f\ndef %f\ndefChance %f\ncritChance %f\ncritPowers %f\nplayer_level %d\ngame_level %d\0", player.name, player.health, player.power, player.def, player.defChance, player.critChance, player.critPower, player.player_level, player.game_level);

    fclose(GameDataFile);
}