#include "Base.h"


int main()
{
	/*Setup terminal settings*/
	tcgetattr(STDIN_FILENO, &oldt);
    	newt = oldt;
    	newt.c_lflag &= ~(ICANON | ECHO);
    	tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    	/*Restor terminal settings*/
    	tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return 0;
}
