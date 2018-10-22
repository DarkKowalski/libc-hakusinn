#include "ctype_mock.h"
int (iscntrl)(int c)
{
	return (_Ctype[c])&(_BB|_CN);
}