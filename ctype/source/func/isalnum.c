#include "ctype_mock.h"
int (isalnum)(int c)
{
	return (_Ctype[(int)c])&(_DI|_LO|_UP|_XA);
}