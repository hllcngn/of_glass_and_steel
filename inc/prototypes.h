#ifndef PROTOTYPES_H
#define PROTOTYPES_H
#include "h.h"

//buf.c
void	save_buf(FILE* f, buf1 b);
void	load_buf(FILE* f, buf1* b);
void	debug_buf(WINDOW* w, buf1 b);

//generate.c
void	make_level(char *clsn, buf1 b);
void	make_static_walls(char* clsn, buf1 b);
void	make_random_walls(buf1 b);

//main.c
int	title();
void	seed_selection();
int	main_menu();
int	settings(PLAYER_SETTINGS* ps);
//main2.c
int	main2(GAME* gm, int new_player);

//game.c
int	game(GAME* gm);
//player_actions.c
void	player_move(char k, vect* pos, char *clsn);
//draw.c
void	draw_buf(buf1 b);
void	draw_level(char* clsn, int w, buf1 b);
void	draw_empty_level(char* clsn, int w);
void	draw_entire_floor();
void	draw_enclosing_walls(char* clsn, int w);
void	draw_floor_at(vect pos);
#endif
