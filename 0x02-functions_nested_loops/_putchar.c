#include <unistd.h>

/**
 * _putchar -writes the character c  to stdou
 * gc: the character to pring 
 * return: on success 1
 * on error -1 us retured and erro is not approprately
 */

int _putchar(char c)

{
	return (write(1,&c,1));
}
