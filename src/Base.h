#ifndef _BASE_H
 #define _BASE_H

  #include <stdio.h>
  #include <stdlib.h>
  #include <math.h>
  #include <time.h>
  #include <ncurses.h>

#if CURSED
  #define printf printw
#else
  #define printf printf
#endif
// D for Dimension
#define D 4 
#define GAMESIZE D*D

static int Tiles[GAMESIZE];

#endif
