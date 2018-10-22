#include "ctype_mock.h"
int (isupper)(int c) 
{
	return (_Ctype[c]) & (_UP);
}