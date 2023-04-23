/*
** EPITECH PROJECT, 2023
** setting.c
** File description:
** ff
*/

#include "struct.h"
#include "rpg.h"

void set_setting_icon_sprite(spt_t *spt)
{
    char name[100] = "./rpg/assets/sprite/icone_pause.png";

    spt[12].texture = sfTexture_createFromFile(name, NULL);
    spt[12].sprite = sfSprite_create();
    sfSprite_setTexture(spt[12].sprite, spt[12].texture, sfTrue);
}

void set_setting_continue_sprite(spt_t *spt)
{
    char name[100] = "./rpg/assets/sprite/continue.jpg";

    spt[13].positions = (sfVector2f){20, 220};
    spt[13].texture = sfTexture_createFromFile(name, NULL);
    spt[13].sprite = sfSprite_create();
    sfSprite_setTexture(spt[13].sprite, spt[13].texture, sfTrue);
    sfSprite_setPosition(spt[13].sprite, spt[13].positions);
}

void set_setting_restart_sprite(spt_t *spt)
{
    char name[100] = "./rpg/assets/sprite/restart.jpg";

    spt[14].texture = sfTexture_createFromFile(name, NULL);
    spt[14].sprite = sfSprite_create();
    sfSprite_setTexture(spt[14].sprite, spt[14].texture, sfTrue);
}

void set_setting_quit_sprite(spt_t *spt)
{
    char name[100] = "./rpg/assets/sprite/quit.jpg";

    spt[15].texture = sfTexture_createFromFile(name, NULL);
    spt[15].sprite = sfSprite_create();
    sfSprite_setTexture(spt[15].sprite, spt[15].texture, sfTrue);
}

void set_setting_background(spt_t *spt)
{
    sfVector2f scale = (sfVector2f){ 0.296, 0.3125 };
    char name[100] = "./rpg/assets/sprite/settong_back.jpg";

    spt[16].texture = sfTexture_createFromFile(name, NULL);
    spt[16].sprite = sfSprite_create();
    sfSprite_setTexture(spt[16].sprite, spt[16].texture, sfTrue);
}
