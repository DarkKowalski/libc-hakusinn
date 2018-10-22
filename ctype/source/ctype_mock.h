/*ctype.h standard header*/
#ifndef _CTYPE_MOCK
#define _CTYPE_MOCK

/* _Ctype code bits*/
#define _XA 0x200 /*extra alphabetic 1,000,000,000*/
#define _XS 0x100 /*extra space 100,000,000*/
#define _BB 0x80 /*BEL,BS,etc 10,000,000*/
#define _CN 0x40 /*CR,FF,HT,NL,VT 1,000,000*/
#define _DI 0x20 /*'0'-'9' 100,000*/
#define _LO 0x10 /*'a'-'z' 10,000*/
#define _PU 0x08 /*punctuation 1,000*/
#define _SP 0X04 /*space 100*/
#define _UP 0x02 /*'A'-'Z' 10*/
#define _XD 0X01 /*'0'-'9','A'-'F','a'-'f' 1*/

/*declarations*/
int isalnum(int);
int isalpha(int);
int iscntrl(int);
int isdigit(int);
int isgraph(int);
int islower(int);
int isupper(int);
int isprint(int);
int ispunct(int);
int isspace(int);
int isupper(int);
int isxdigit(int);
int tolower(int);
int toupper(int);
extern const short *_Ctype;
extern const short *_Tolower;
extern const short *_Toupper;

/*macro overrides*/
#define isalnum(c) (_Ctype[(int)c])&(_DI|_LO|_UP|_XA)
#define isalpha(c) (_Ctype[(int)c])&(_LO|_UP|_XA)
#define iscntrl(c) (_Ctype[(int)c])&(_BB|_CN)
#define isdigit(c) (_Ctype[(int)c])&(_DI)
#define isgraph(c) (_Ctype[(int)c]) & (_DI | _LO | _PU | _UP | _XA)
#define islower(c) (_Ctype[(int)c]) & (_LO)
#define isprint(c) (_Ctype[(int)c]) & (_DI | _LO | _PU | _SP | _UP | _XA)
#define ispunct(c) (_Ctype[(int)c]) & (_PU)
#define isspace(c) (_Ctype[(int)c]) & (_CN | _SP | _XS)
#define isupper(c) (_Ctype[(int)c]) & (_UP)
#define isxdigit(c) (_Ctype[(int)c]) & (_XD)
#define tolower(c) (_Tolower[(int)c])
#define toupper(c) (_Toupper[(int)c])

#endif
