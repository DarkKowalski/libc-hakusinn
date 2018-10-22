#include "ctype_mock.h"
int (tolower)(int c) 
{
	return (_Tolower[c]);
}