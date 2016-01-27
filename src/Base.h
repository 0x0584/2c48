#ifndef _BASE_H
 #define _BASE_H

 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <termios.h>
 #include <time.h>
 #include <unistd.h>

  #define INVALID -1
  #define UP       1
  #define DOWN     2
  #define RIGHT    3
  #define LEFT     4
   const long vals[] = {
	   0, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048
   };
   
   const char *colors[] = {
	   "31", "39", "33", "32", "34", "35", "36", "37", "91", "92", "93", "94"
   };
   #define D 4
   struct GameStructure__Status {
	   int grid[D][D];
	   int moved;
	   long score;
	   long last_score;
	   int blocks;
   } game;
   
   struct termios oldt, newt;
#endif
