#include "ctype_mock.h"
int (isxdigit)(int c) 
{
	return (_Ctype[c]) & (_XD);
}