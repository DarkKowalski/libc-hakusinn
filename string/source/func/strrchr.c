#include "string_mock.h"
char *(strrchr)(const char *s, int c)
{
	const char ch = c;
	const char *sc;

	for(sc = NULL;;++s)
	{
		if(*s == ch)
			sc = s;
		if(*s == '\0')
			return ((char *)sc);
	}
}