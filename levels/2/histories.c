void print_level_2_history_1()
{
    printf("\n----------------------------------------------------------------------\n");
    drawChapter2();
    char a;
    scanf("%c", &a);
    scanf("%c", &a);
}

void print_level_2_history_2_start()
{
    printf("\n The first opponent that crossed his path was the Scorchclaw Basilisk, a reptilian behemoth whose scales radiated intense heat. (Press enter)\n");
    makePause();
    printf(" With the ability to breathe searing flames, the basilisk sought to defend its territory fiercely. (Press enter)\n");
    makePause();
}

void print_level_2_history_2_end()
{
    printf("\n Undeterred, %s faced the creature head-on, employing a combination of agile maneuvers and well-timed strikes to outmaneuver the fiery assaults. (Press enter)\n", player.name);
    char a;
    scanf("%c", &a);
    scanf("%c", &a);
    printf("\n With each clash, the knight's determination prevailed, and the Scorchclaw Basilisk conceded defeat, its flames extinguished. (Press enter)\n");
    makePause();
}

void print_level_2_history_3_start()
{
    printf(" Continuing through the Desiers Field, %s encountered the Stormshriek Harpies, a flock of winged adversaries whose piercing cries unleashed powerful gusts of wind. (Press enter)\n", player.name);
    char a;
    scanf("%c", &a);
    scanf("%c", &a);
    printf(" The harpies, drawn to the knight as a perceived threat, engaged him in a chaotic aerial battle. (Press enter)\n", player.name);
    makePause();
}

void print_level_2_history_3_end()
{
    printf(" %s, displaying exceptional combat prowess, deftly navigated the skies and countered the harpies' onslaught. (Press enter)\n", player.name);
    char a;
    scanf("%c", &a);
    scanf("%c", &a);
    printf(" The wind-blown feathers settled as the defeated harpies dispersed, leaving the Desiers Field momentarily calm. (Press enter)\n", player.name);
    makePause();
}

void print_level_2_history_4_start()
{
    printf("\n However, the knight's journey took a darker turn as he faced the Dune Phantom Sorcerer, a cunning and elusive spellcaster who harnessed the very essence of the desert to launch relentless magical assaults. (Press enter)\n");
    makePause();
}

void print_level_2_history_4_end()
{
    printf("\n %s, forced to contend with illusions and arcane traps, showcased his resilience and strategic acumen.  (Press enter)\n", player.name);
    char a;
    scanf("%c", &a);
    scanf("%c", &a);
    printf("\n Through a battle of wits and skill, the sorcerer's illusions were dispelled, and the Dune Phantom Sorcerer was defeated, its dark magic dissipating into the arid air. (Press enter)\n");
    makePause();
}

void print_level_2_history_5_start()
{
    printf(" The true challenge awaited %s in the heart of the Desiers Field - a colossal and malevolent creature known as The Abyssal Sandstorm Leviathan. (Press enter)\n", player.name);
    char a;
    scanf("%c", &a);
    scanf("%c", &a);
    printf(" This monstrous being, born from the chaotic energies of the desert, wielded the power to summon devastating sandstorms and unleash torrents of razor - sharp sand. (Press enter)\n");
    makePause();
    printf(" %s, now facing his ultimate test, stood resolute before the Leviathan. (Press enter)\n", player.name);
    makePause();
}

void print_level_2_history_5_end()
{
    printf("\n The Abyssal Sandstorm Leviathan was defeted (Press enter)\n");
    makePause();
}