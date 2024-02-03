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

typedef enum
{
    false,
    true
} bool;

static Player player;
FILE *GameDataFile;
char name[11];
int inp;
int pre_level = 1;

void makePause()
{
    char a;
    scanf("%c", &a);
}

void drawWon()
{
    printf("\n");
    printf(" 888       888                   \n");
    printf(" 888   o   888                   \n");
    printf(" 888  d8b  888                   \n");
    printf(" 888 d888b 888  .d88b.  88888b.  \n");
    printf(" 888d88888b888 d88\"\"88b 888 \"88b\n");
    printf(" 88888P Y88888 888  888 888  888\n");
    printf(" 8888P   Y8888 Y88..88P 888  888\n");
    printf(" 888P     Y888  \"Y88P\"  888  888\n");
}

void drawLost()
{
    printf("  __        ______        _______.___________.\n");
    printf(" |  |      /  __  \\      /       |           |\n");
    printf(" |  |     |  |  |  |    |   (----`---|  |----`\n");
    printf(" |  |     |  |  |  |     \\   \\       |  |\n");
    printf(" |  `----.|  `--'  | .----)   |      |  |\n");
    printf(" |_______| \\______/  |_______/       |__|\n");
}

int randInt(int min, int max)
{
    return floor(rand() % (max - min + 1) + min);
}

void EndGameText()
{
    printf(" a88888b.  .88888.  888888ba   .88888.   888888ba   .d888888  d888888P dP     dP dP         .d888888  d888888P dP  .88888.  888888ba  \n");
    printf("d8'   `88 d8'   `8b 88    `8b d8'   `88  88    `8b d8'    88     88    88     88 88        d8'    88     88    88 d8'   `8b 88    `8b \n");
    printf("88        88     88 88     88 88        a88aaaa8P' 88aaaaa88a    88    88     88 88        88aaaaa88a    88    88 88     88 88     88 \n");
    printf("88        88     88 88     88 88   YP88  88   `8b. 88     88     88    88     88 88        88     88     88    88 88     88 88     88 \n");
    printf("Y8.   .88 Y8.   .8P 88     88 Y8.   .88  88     88 88     88     88    Y8.   .8P 88        88     88     88    88 Y8.   .8P 88     88 \n");
    printf(" Y88888P'  `8888P'  dP     dP  `88888'   dP     dP 88     88     dP    `Y88888P' 88888888P 88     88     dP    dP  `8888P'  dP     dP \n");
    printf("oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
}

void drawGameName()
{
    printf("\n\n");
    printf("  .88888.                                .d888888        dP                     dP                              \n");
    printf(" d8'   `88                              d8'    88        88                     88                              \n");
    printf(" 88        .d8888b. 88d8b.d8b. .d8888b. 88aaaaa88a .d888b88 dP   .dP .d8888b. d8888P dP    dP 88d888b. .d8888b. \n");
    printf(" 88   YP88 88'  `88 88'`88'`88 88ooood8 88     88  88'  `88 88   d8' 88ooood8   88   88    88 88'  `88 88ooood8 \n");
    printf(" Y8.   .88 88.  .88 88  88  88 88.  ... 88     88  88.  .88 88 .88'  88.  ...   88   88.  .88 88       88.  ... \n");
    printf("  `88888'  `88888P8 dP  dP  dP `88888P' 88     88  `88888P8 8888P'   `88888P'   dP   `88888P' dP       `88888P' \n");
    printf(" ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo\n");
}