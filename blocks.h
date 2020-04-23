//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"","cat /tmp/recordingicon 2>/dev/null",	0,	9},
	{"","music ",	0,	9},
	{"Int: ", "internet ",				20,	0},
	{"🔊 ", "amixer get Master | grep -o \"\\(\\[off\\]\\|[0-9]*%\\)\" ", 0, 10},
	{"📆 ", "clock",	60,	0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
