#include "string_mock.h"

char *(strchr)(const char *s, int c)
{
	const char ch = c;

	for(; *s != ch;++s)
		if(*s == '\0')
			return NULL;
	return ((char *)s);
}