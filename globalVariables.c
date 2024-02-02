static Player player;
FILE* GameDataFile;
char name[11];
int inp;
int pre_level = 1;

void makePause(){
    char a;
    printf("\r\n\nPress enter to continue...\n");
    scanf("%c", &a);
}