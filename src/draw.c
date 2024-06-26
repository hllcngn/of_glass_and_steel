#include "h.h"

void	draw_empty_level(){
draw_entire_floor();
draw_enclosing_walls();
return;}

void	make_level(char *clsn){
draw_entire_floor();
generate_static_walls(clsn);
generate_random_walls();
draw_enclosing_walls();
return;}

void	draw_floor_at(vect pos){
move(pos.y,pos.x);
if	(FLOOR_TYPE=='s')
addch('.');
else if	(FLOOR_TYPE=='p'){
if	(PAVING=='|')
if (pos.x%2)	addch('_');
else		addch('|');
else if	(PAVING=='+')
if (pos.x%2)	addch(' ');
else		addch('+');
else if	(PAVING=='/')
if (pos.x%2)	if (pos.y%2)	addch('/');
		else		addch('\\');
else		if (pos.y%2)	addch('\\');
		else		addch('/');}
return;}

void	draw_entire_floor(){
attron(A_DIM);
if	(FLOOR_TYPE=='s')
fill_term(C_FLOOR);
else if	(FLOOR_TYPE=='p'){
if	(PAVING=='|')
for (int i=0; i<LINES; i++) //| on even x /_ on odd
	space1in2(i,0, '|','_', COLS);
else if	(PAVING=='+')
for (int i=0; i<LINES; i++) //+ on even x
	space1in2(i,0, '+',' ', COLS);
else if (PAVING=='/')
for (int i=0; i<LINES; i+=2){ //even y: / on even x/\ on odd
	space1in2(i,0, '/','\\', COLS);
	space1in2(i+1,0, '\\','/', COLS);}}
attroff(A_DIM);
return;}

void	draw_enclosing_walls(){
if	(OUTWALL_HL =='y')
attron(A_REVERSE);
space(0,0, '-', COLS);
space(LINES-1,0, '-', COLS);
vspace(0,0, '|', LINES);
vspace(0,COLS-1, '|', LINES);
if	(OUTWALL_HL =='y')
attroff(A_REVERSE);
return;}
