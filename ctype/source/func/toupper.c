#include "ctype_mock.h"
int (toupper)(int c) 
{
	return (_Toupper[c]);
}