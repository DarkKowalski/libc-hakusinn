#include "ctype_mock.h"
int (isalpha)(int c)
{
	return (_Ctype[(int)c])&(_LO|_UP|_XA);
}