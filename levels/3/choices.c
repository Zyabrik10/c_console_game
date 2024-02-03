void print_level_3_choice_1()
{
    printf(" As the knight set foot on the Dragon Island, he encountered ethereal creatures known as Ember Sprites. (Press enter)\n");
    char a;
    scanf("%c", &a);
    scanf("%c", &a);
    // ----------------------------------------------------------------
    printf(" These radiant beings, though native to the island, were tormented by the oppressive aura of Drakon. (Press enter)\n");
    makePause();
    printf("----------------------------------------------------------------------\n\n");
}

void print_menu_for_choice_1_level_3()
{
    printf(" Choose what to do:\n\n");
    printf("  Help them - 1\n");
    printf("  Leave them to die - 2\n\n");
}

void make_choice_level_3_history_1()
{
    int comand;
    char a;
    print_menu_for_choice_1_level_3();

    while (1)
    {
        comand = scanPlayerInput();

        switch (comand)
        {
        case 1:
            printf("\n Recognizing the urgency of their plea, the knight pledged to free the Ember Sprites from the dragon's malevolent influence. (Press enter)\n");
            increasePlayerLevel(5);
            scanf("%c", &a);
            scanf("%c", &a);
            return;
        case 2:
            printf("\n They are dead becouse of YOU! (Press enter)\n");
            scanf("%c", &a);
            scanf("%c", &a);
            return;
        }
    }
}

void print_level_3_choice_2()
{
    printf(" Continuing deeper into the heart of the Dragon Island, %s encountered the Crystal Wyrm Sentries.", player.name);
    char a;
    scanf("%c", &a);
    scanf("%c", &a);
    // ----------------------------------------------------------------
    printf(" These majestic serpentine creatures, once protectors of the island 's crystal caverns, had succumbed to Drakon' s dark influence. (Press enter)\n");
    makePause();
    // ----------------------------------------------------------------
    printf(" With sorrowful eyes, they sought %s's assistance in breaking free from the malevolent chains that bound them. (Press enter)\n", player.name);
    makePause();
    printf("----------------------------------------------------------------------\n\n");
}

void print_menu_for_choice_2_level_3()
{
    printf(" Choose what to do:\n\n");
    printf("  Help them - 1\n");
    printf("  Leave them - 2\n\n");
}

void make_choice_level_3_history_2()
{
    int comand;
    char a;
    print_menu_for_choice_2_level_3();

    while (1)
    {
        comand = scanPlayerInput();

        switch (comand)
        {
        case 1:
            printf("\n Drawing upon his mastery of both sword and magic, the knight shattered the dark enchantments, liberating the Crystal Wyrm Sentries from Drakon' s control. (Press enter)\n");
            scanf("%c", &a);
            scanf("%c", &a);
            increasePlayerLevel(10);
            return;
        case 2:
            printf("\n They are dead becouse of YOU! (Press enter)\n");
            scanf("%c", &a);
            scanf("%c", &a);
            return;
        }
    }
}

void print_level_3_choice_3()
{
    // ----------------------------------------------------------------
    printf(" The first creature, known as the Frost Whisperer, appeared at the edge of a frozen glade. (Press enter)\n");
    char a;
    scanf("%c", &a);
    scanf("%c", &a);
    // ----------------------------------------------------------------
    printf(" This majestic being had the ability to manipulate ice and frost, but an ancient curse had bound it to an unending winter. (Press enter)\n");
    makePause();
    // ----------------------------------------------------------------
    printf(" The once vibrant glade had succumbed to perpetual frost, causing the flora and fauna to wither. (Press enter)\n");
    makePause();
    printf("----------------------------------------------------------------------\n\n");
}

void print_menu_for_choice_3_level_3()
{
    printf(" Choose what to do:\n\n");
    printf("  Help them - 1\n");
    printf("  Leave them to die - 2\n\n");
}

void make_choice_level_3_history_3()
{
    int comand;
    char a;
    print_menu_for_choice_3_level_3();

    while (1)
    {
        comand = scanPlayerInput();

        switch (comand)
        {
        case 1:
            printf("\n %s, recognizing the creature's plight, offered his assistance.\n With a combination of his sword skills and knowledge of ancient spells, the knight lifted the curse that gripped the Frost Whisperer.\n In gratitude, the creature summoned a gentle snowfall that revitalized the glade, transforming it into a winter wonderland. (Press enter)\n", player.name);
            increasePlayerLevel(1);
            scanf("%c", &a);
            scanf("%c", &a);
            return;
        case 2:
            printf("\n They are dead because of YOU! (Press enter)\n");
            scanf("%c", &a);
            scanf("%c", &a);
            return;
        }
    }
}