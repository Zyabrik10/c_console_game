typedef struct Player
{
    bool hasPlayerStartedGame;
    char *nickname;
    int health;
    float power;
    float def;
    float critChance;
    float critPower;
    int level;
} Player;

static Player player;
