typedef struct Player
{
    char *name;
    float health;
    float power;
    float def;
    float defChance;
    float critChance;
    float critPower;
    int game_level;
    int player_level;
} Player;

typedef struct Enemy
{
    char *name;
    float health;
    float power;
    float def;
    float defChance;
    float critChance;
    float critPower;
    int enemy_level;
} Enemy;