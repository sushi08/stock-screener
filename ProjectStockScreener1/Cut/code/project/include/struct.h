#pragma once
#define DATELEN 100
/*Structure and variables(for size) are defined here*/

#define OPENLEN 100
#define HIGHLEN 100
#define LOWLEN 100
#define CLOSELEN 100
#define ADJCLOSELEN 100
#define VOLUMELEN 100
#define PARSEDLEN 200
#define RANGE1 (float)10
#define RANGE2 (float)50

struct NODE{

char date[DATELEN];
char open[OPENLEN];
char high[HIGHLEN];
char low[LOWLEN];
char close[CLOSELEN];
char adjClose[ADJCLOSELEN];
char volume[VOLUMELEN];
struct NODE *next;

};