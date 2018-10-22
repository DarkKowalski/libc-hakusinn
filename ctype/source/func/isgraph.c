#include "ctype_mock.h"
int (isgraph)(int c) 
{
	return (_Ctype[c] )& (_DI | _LO | _PU | _UP | _XA);
}