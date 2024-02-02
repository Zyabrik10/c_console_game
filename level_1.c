void print_level_1_history_1(){
    printf("\n----------------------------------------------------------------------\n\n");
    printf("Chapter 1: The Cry Forest\n");
    printf("\r\nPress to continue...\n");
    char c;
    scanf("%c", &c);
    scanf("%c", &c);
    // ----------------------------------------------------------------
    printf("As the knight entered the Cry Forest, the air turned chilly and the trees loomed over him like silent sentinels. Suddenly, he heard a high-pitched scream coming from the depths of the forest.");
    makePause();
    // ----------------------------------------------------------------
    printf("'Help! Help!' cried a voice in distress.");
    makePause();
    // ----------------------------------------------------------------
    printf("Rushing towards the sound, he stumbled upon a small clearing where a group of fairies were trapped in a tangle of vines and thorns.Their delicate wings fluttered frantically as they struggled to free themselves.");
    makePause();
    // ----------------------------------------------------------------
    printf("'Let us free! Please!' they wailed.");
    makePause();
    printf("----------------------------------------------------------------------\n\n");
}

void print_menu_for_choice_level_1(){
    printf("Choose what to do:\n\n");
    printf(" Help them - 1\n");
    printf(" Leave them to die - 2\n\n");
}

void make_choice_level_1_history_1(){
    int comand;
    print_menu_for_choice_level_1();

    while(1){
        comand = scanPlayerInput();

        switch(comand){
            case 1:
                printf("\nThe knight unsheathed his sword and began hacking through the vines, releasing the fairies one by one. As they flew joyously around him, their laughter echoed through the forest like tinkling bells.\n\n");
                increasePlayerLevel(1);
                return;
            case 2:
                printf("\nThey are dead becouse of YOU!\n\n");
                return;
        }
    }
}

void level_1_bossFighting(){

    while(1){
        Enemy wolf = createEnemy("Wolf", 1);
        Enemy orc = createEnemy("Orc", 2);
        Enemy boss = createEnemy("Cry Dragon", 10);
        Enemy enemies[2] = {wolf, orc};

        bool hasWon = enconterEnemy(&boss, false);

        int enemiesNumber = 5;

        if (hasWon){
            printf("\nYou have won\n");
            increasePlayerLevel(2);
            return;
        }

        printf("\nTry to gain more exp by killing %d enemies in a row\n", enemiesNumber);

        restorePlayerHealth();
        fighEnemies(enemies, 2, enemiesNumber);
    }
}

void level_1(){
    print_level_1_history_1();
    make_choice_level_1_history_1();

    Enemy wolf = createEnemy("Wolf", 1);
    Enemy orc = createEnemy("Orc", 2);

    Enemy enemies[2] = {wolf, orc};
    int enemies_length = sizeof(enemies) / sizeof(Enemy);
    
    enconterEnemy(&enemies[randInt(0, enemies_length - 1)], true);

    level_1_bossFighting();
}