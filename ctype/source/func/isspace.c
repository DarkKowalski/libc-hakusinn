#include "ctype_mock.h"
int (isspace)(int c) 
{
	return (_Ctype[c]) & (_CN | _SP | _XS);
}