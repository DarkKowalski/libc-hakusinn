#include "ctype_mock.h"
int (isdigit)(int c) 
{
	return (_Ctype[c])&(_DI);
}