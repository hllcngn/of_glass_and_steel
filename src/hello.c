#include <ncurses.h>

int main(int ac,char** av){
//Isn't it more exciting to start again?
initscr();
noecho(); cbreak(); curs_set(0);

mvprintw(2,7,"Hello this is d0pe");
refresh();

getch();

endwin();
return 0;}
