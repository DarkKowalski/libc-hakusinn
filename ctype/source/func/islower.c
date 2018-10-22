#include "ctype_mock.h"
int (islower)(int c) 
{
	return (_Ctype[c])& (_LO);
}
