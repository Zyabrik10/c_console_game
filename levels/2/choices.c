void print_level_2_choice_1()
{
    // ----------------------------------------------------------------
    printf(" In the heart of the Desiers Field, the knight encountered ethereal creatures known as Mirage Drifters. (Press enter)\n");
    makePause();
    // ----------------------------------------------------------------
    printf(" These enigmatic beings, although seemingly ephemeral, were bound by an ancient curse that distorted their true forms. (Press enter)\n");
    makePause();
    // ----------------------------------------------------------------
    printf(" Appearing as mirages to the untrained eye, the Mirage Drifters sought %s aid to break the mystical chains that concealed their authentic selves. (Press enter)\n", player.name);
    makePause();
    printf("----------------------------------------------------------------------\n\n");
}

void print_menu_for_choice_1_level_2()
{
    printf(" Choose what to do:\n\n");
    printf("  Help them - 1\n");
    printf("  Leave them to die - 2\n\n");
}

void make_choice_level_2_history_1()
{
    int comand;
    char a;
    print_menu_for_choice_1_level_2();

    while (1)
    {
        comand = scanPlayerInput();

        switch (comand)
        {
        case 1:
            printf("\n Recognizing the creatures' plea for liberation, %s employed his swordsmanship and arcane knowledge to unravel the intricate web of illusions that ensnared the Mirage Drifters. (Press enter)\n", player.name);
            scanf("%c", &a);
            scanf("%c", &a);
            printf(" With each decisive strike and incantation, the knight dispelled the illusions, revealing the true beauty and grace of the Mirage Drifters. (Press enter)\n");
            makePause();
            printf(" Grateful for their newfound freedom, the ethereal beings expressed their gratitude and went back far into deep. (Press enter)\n", player.name);
            makePause();
            increasePlayerLevel(5);
            return;
        case 2:
            printf("\n They are dead because of YOU! (Press enter)\n");
            scanf("%c", &a);
            scanf("%c", &a);
            return;
        }
    }
}

void print_level_2_choice_2()
{
    // ----------------------------------------------------------------
    printf(" Continuing through the Desiers Field, %s encountered another group of creatures known as the Embercall Phoenixes. (Press enter)\n", player.name);
    char a;
    scanf("%c", &a);
    // ----------------------------------------------------------------
    printf(" These majestic avian beings, once revered for their ability to manipulate fire, had fallen victim to a nefarious sorcerer's curse. (Press enter)\n");
    makePause();
    // ----------------------------------------------------------------
    printf(" The Embercall Phoenixes, their flames reduced to mere embers, implored %s to break the curse and restore their fiery glory. (Press enter)\n", player.name);
    makePause();
    printf("----------------------------------------------------------------------\n\n");
}

void print_menu_for_choice_2_level_2()
{
    printf(" Choose what to do:\n\n");
    printf("  Help them - 1\n");
    printf("  Leave them - 2\n\n");
}

void make_choice_level_2_history_2()
{
    int comand;
    char a;
    print_menu_for_choice_2_level_2();

    while (1)
    {
        comand = scanPlayerInput();

        switch (comand)
        {
        case 1:
            printf("\n Drawing upon his expertise, %s faced the sorcerer's malevolent magic head-on. (Press enter)\n", player.name);
            scanf("%c", &a);
            scanf("%c", &a);
            printf(" With swift swordplay and a profound understanding of ancient incantations, the knight shattered the curse that bound the Embercall Phoenixes. (Press enter)\n", player.name);
            makePause();
            printf(" As the flames roared back to life, the grateful phoenixes soared above the Desiers Field, their radiant plumage lighting up the sky. (Press enter)\n", player.name);
            makePause();
            increasePlayerLevel(5);
            return;
        case 2:
            printf("\n They are dead because of YOU! (Press enter)\n");
            scanf("%c", &a);
            scanf("%c", &a);
            return;
        }
    }
}

void print_level_2_choice_3()
{
    // ----------------------------------------------------------------
    printf(" In his quest across the Desiers Field, %s encountered yet another mysterious creature, hidden in the shimmering dunes. (Press enter)\n", player.name);
    char a;
    scanf("%c", &a);
    scanf("%c", &a);
    // ----------------------------------------------------------------
    printf(" This creature, known as the Sand Serpent Oracle, possessed the ability to foresee the future through the patterns of the shifting sands. (Press enter)\n");
    makePause();
    // ----------------------------------------------------------------
    printf(" However, a malevolent force had twisted its visions, leading the once - helpful oracle to offer prophecies of doom and despair. (Press enter)\n");
    makePause();
    // ----------------------------------------------------------------
    printf(" The Sand Serpent Oracle, desperate to break free from the dark influence, sought %s's intervention. (Press enter)\n", player.name);
    makePause();
    // ----------------------------------------------------------------
    printf(" The knight, understanding the gravity of the situation, delved into the heart of the dunes to confront the malevolent force that clouded the oracle' s visions. (Press enter)\n");
    makePause();
    // ----------------------------------------------------------------
    printf(" Battling against swirling sandstorms and facing illusions meant to deceive, %s demonstrated his resilience. (Press enter)\n", player.name);
    makePause();
    printf("----------------------------------------------------------------------\n\n");
}

void print_menu_for_choice_3_level_2()
{
    printf(" Choose what to do:\n\n");
    printf("  Help them - 1\n");
    printf("  Leave them to die - 2\n\n");
}

void make_choice_level_2_history_3()
{
    int comand;
    char a;
    print_menu_for_choice_3_level_2();

    while (1)
    {
        comand = scanPlayerInput();

        switch (comand)
        {
        case 1:
            printf("\n Through a combination of strategic swordplay and the invocation of protective enchantments, %s confronted the malevolent entity and shattered its hold over the Sand Serpent Oracle. (Press enter)\n", player.name);
            scanf("%c", &a);
            scanf("%c", &a);
            printf("\n As the sands settled, the creature's prophecies transformed from harbingers of doom to guiding lights, offering insights that would aid %s on his journey. (Press enter)\n", player.name);
            makePause();
            increasePlayerLevel(5);
            return;
        case 2:
            printf("\n They are dead because of YOU! (Press enter)\n");
            scanf("%c", &a);
            scanf("%c", &a);
            return;
        }
    }
}