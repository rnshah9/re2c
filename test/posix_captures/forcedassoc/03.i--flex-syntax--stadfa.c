/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 5) YYFILL(5);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':	goto yy3;
	default:	goto yy2;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
	case 'b':	goto yy5;
	case 'c':	goto yy6;
	default:	goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'b':	goto yy8;
	case 'c':	goto yy9;
	default:	goto yy4;
	}
yy6:
	++YYCURSOR;
	yyt1 = YYCURSOR - 1;
yy7:
	yynmatch = 3;
	yypmatch[2] = yyt2;
	yypmatch[4] = yyt1;
	yypmatch[0] = yyt2;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt1;
	yypmatch[5] = YYCURSOR;
	{}
yy8:
	yych = *++YYCURSOR;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy10;
	default:	goto yy4;
	}
yy9:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'd':	goto yy11;
	default:	goto yy7;
	}
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy11;
	default:	goto yy4;
	}
yy11:
	++YYCURSOR;
	yyt1 = yyt3;
	goto yy7;
}

posix_captures/forcedassoc/03.i--flex-syntax--stadfa.re:6:7: warning: rule matches empty string [-Wmatch-empty-string]
