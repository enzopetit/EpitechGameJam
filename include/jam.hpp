#ifndef JAM_H_
#define JAM_H_

#include <SFML/Graphics.hpp>
#include <iostream>
#include <chrono>
#include <sstream>
#include <fstream>
#include <string>

#define SUCCESS 0
#define FAILURE 84
#define CLEAR -1

constexpr unsigned char CELL_SIZE = 16;

constexpr unsigned short SCREEN_HEIGHT = 240;
constexpr unsigned short SCREEN_WIDTH = 256;

typedef struct map_s {
    char **tab;
    sf::Vector2f player;
} map_t;

typedef struct {
    float coor_x;
    float coor_y;
    sf::Texture bloc_t;
    sf::Sprite bloc_s;
} bloc_t;

typedef struct {
    char **tab;
    int nb_bloc;
    bloc_t *bloc;
} map_build_t;

typedef struct {
    int x;
    int y;
    bool is_noir;
    bool is_take;
    sf::Texture piece_t;
    sf::Sprite piece_s;
} piece_t;

typedef struct yin_yang {
    float P_1_vx;
    float P_1_vy;
    float P_2_vx;
    float P_2_vy;
    bool P_1isRightPressed = false;
    bool P_1isLeftPressed = false;
    bool P_2isRightPressed = false;
    bool P_2isLeftPressed = false;
    bool lose = false;
    bool jump_n = false;
    bool jump_b = false;
    bool stop_chute_n = false;
    bool stop_chute_b = false;
    int cond_n;
    int cond_b;

    int nb_piece;
    int spawn_nx;
    int spawn_ny;
    int spawn_bx;
    int spawn_by;
    piece_t *p;

    map_build_t builder;

    map_t *m;
    sf::Sprite sprite_n;
    sf::Texture texture_n;

    sf::Sprite sprite_b;
    sf::Texture texture_b;

    sf::Font font;
    sf::Sprite hoppy;
    sf::Sprite map_sprite;
    sf::Texture map_text;
    sf::Vector2f mapPosition;

    sf::RenderWindow window;
    sf::Vector2f spritePosition_n;
    sf::Vector2f spritePosition_b;
} yin_yang_t;

constexpr std::chrono::microseconds FRAME_DURATION(16667);

void make_map(const char *map_name, yin_yang_t *y);
void get_keyboard_event(yin_yang_t *y);
int cond_stop_chute(yin_yang_t *y);
int cond_stop_saut(yin_yang_t *y);
int cond_stop_droite(yin_yang_t *y);
int cond_stop_gauche(yin_yang_t *y);
bool collisions_p1(yin_yang_t *y);
bool collisions_p2(yin_yang_t *y);
int cond_stop_chute_2(yin_yang_t *y);
int cond_stop_saut_2(yin_yang_t *y);
int cond_stop_droite_2(yin_yang_t *y);
int cond_stop_gauche_2(yin_yang_t *y);
void update_sprite_n(yin_yang_t *y);
void update_sprite_b(yin_yang_t *y);
void update_game(yin_yang_t *y);
void update_physique(yin_yang_t *y);
void get_info(yin_yang_t *y, const char *filename);
bool load_personnages_and_yin_yang(yin_yang_t *y, char const *info);
void update_yin_yang(yin_yang_t *y);
void start_game(yin_yang_t *y);
void init_page(yin_yang_t *y, char const *map, char const *info);

#endif /* JAM_H_ */
