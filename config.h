//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    //{"",    "news",     300,      6},
    {"",    "weather",  18000,  5},
	{"",	"volume",	0,	    10},
	{"",	"internet",	5,	    4},
    {"",    "disk",     10,     2},
    {"",    "load",     1,      7},
	{"",	"battery",	5,	    3},
	{"",	"clock",	15,	    1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = "  ";
