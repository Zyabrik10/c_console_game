void print_level_1_choice_1()
{
    // ----------------------------------------------------------------
    printf(" As the knight entered the Cry Forest, the air turned chilly and the trees loomed over him like silent sentinels.\n Suddenly, he heard a high-pitched scream coming from the depths of the forest. (Press enter)\n");
    makePause();
    // ----------------------------------------------------------------
    printf(" 'Help! Help!' cried a voice in distress. (Press enter)\n");
    makePause();
    // ----------------------------------------------------------------
    printf(" Rushing towards the sound, he stumbled upon a small clearing where a group of fairies were trapped in a tangle of vines and thorns.\n Their delicate wings fluttered frantically as they struggled to free themselves. (Press enter)\n");
    makePause();
    // ----------------------------------------------------------------
    printf(" 'Let us free! Please!' they wailed. (Press enter)\n");
    makePause();
    printf("----------------------------------------------------------------------\n\n");
}

void print_menu_for_choice_level_1()
{
    printf(" Choose what to do:\n\n");
    printf("  Help them - 1\n");
    printf("  Leave them to die - 2\n\n");
}

void make_choice_level_1_history_1()
{
    int comand;
    char a;
    print_menu_for_choice_level_1();

    while (1)
    {
        comand = scanPlayerInput();

        switch (comand)
        {
        case 1:
            printf("\n The knight unsheathed his sword and began hacking through the vines, releasing the fairies one by one.\n As they flew joyously around him, their laughter echoed through the forest like tinkling bells. (Press enter)\n");
            increasePlayerLevel(2);
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

void print_level_1_choice_2()
{
    // ----------------------------------------------------------------
    printf("\n As %s ventured deeper into the heart of the forest, he stumbled upon a clearing where peculiar creatures, ethereal and delicate, awaited his arrival. (Press enter)\n", player.name);
    makePause();
    // ----------------------------------------------------------------
    printf(" These mystical beings, known as the Luminescent Sylvans, were guardians of the Cry Forest, and their radiance flickered with an otherworldly glow. (Press enter)\n");
    makePause();
    // ----------------------------------------------------------------
    printf(" However, a subtle sorrow hung in the air, as the Sylvans were burdened with a task beyond their ethereal capabilities. (Press enter)\n");
    makePause();
    // ----------------------------------------------------------------
    printf(" They beseeched %s for assistance, as a malevolent force had cast a shadow over their home, threatening to extinguish the very essence of the Cry Forest. (Press enter)\n", player.name);
    makePause();
    printf("----------------------------------------------------------------------\n\n");
}

void print_menu_for_choice_2_level_1()
{
    printf(" Choose what to do:\n\n");
    printf("  Help them - 1\n");
    printf("  Leave them - 2\n\n");
}

void make_choice_level_1_history_2()
{
    int comand;
    char a;
    print_menu_for_choice_2_level_1();

    while (1)
    {
        comand = scanPlayerInput();

        switch (comand)
        {
        case 1:
            printf("\n Bound by his noble code and an innate sense of duty, %s pledged to aid the Luminescent Sylvans in their time of need. (Press enter)\n", player.name);
            scanf("%c", &a);
            scanf("%c", &a);
            printf(" The creatures, with gratitude reflected in their luminescent eyes, guided the knight through the mystical labyrinth of the Cry Forest. (Press enter)\n");
            makePause();
            printf(" Along the way, they encountered treacherous terrains and faced ethereal challenges that tested %s resolve. (Press enter)\n", player.name);
            makePause();
            increasePlayerLevel(2);
            return;
        case 2:
            printf("\n They are dead because of YOU! (Press enter)\n");
            scanf("%c", &a);
            scanf("%c", &a);
            return;
        }
    }
}

void print_level_1_choice_3()
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

void print_menu_for_choice_3_level_1()
{
    printf(" Choose what to do:\n\n");
    printf("  Help them - 1\n");
    printf("  Leave them to die - 2\n\n");
}

void make_choice_level_1_history_3()
{
    int comand;
    char a;
    print_menu_for_choice_3_level_1();

    while (1)
    {
        comand = scanPlayerInput();

        switch (comand)
        {
        case 1:
            printf("\n %s, recognizing the creature's plight, offered his assistance. (Press enter)\n", player.name);
            scanf("%c", &a);
            scanf("%c", &a);
            printf("With a combination of his sword skills and knowledge of ancient spells, the knight lifted the curse that gripped the Frost Whisperer. (Press enter)\n");
            makePause();
            printf("In gratitude, the creature summoned a gentle snowfall that revitalized the glade, transforming it into a winter wonderland. (Press enter)\n");
            makePause();
            increasePlayerLevel(2);
            return;
        case 2:
            printf("\n They are dead because of YOU! (Press enter)\n");
            scanf("%c", &a);
            scanf("%c", &a);
            return;
        }
    }
}