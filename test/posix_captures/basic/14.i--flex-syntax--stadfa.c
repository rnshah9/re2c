/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':
	case 'b':	goto yy3;
	case 'c':	goto yy5;
	default:	goto yy2;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt1 = yyt2 = YYCURSOR - 1;
	switch (yych) {
	case 'a':
	case 'b':	goto yy7;
	case 'c':	goto yy9;
	default:	goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	++YYCURSOR;
	yyt2 = yyt3 = NULL;
	yyt1 = YYCURSOR - 1;
	yyt4 = NULL;
yy6:
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[4] = yyt4;
	yypmatch[5] = yyt4;
	yypmatch[1] = YYCURSOR;
	{}
yy7:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
	case 'a':
	case 'b':	goto yy7;
	case 'c':	goto yy9;
	default:	goto yy4;
	}
yy9:
	++YYCURSOR;
	yyt3 = YYCURSOR - 1;
	yyt4 = NULL;
	goto yy6;
}

posix_captures/basic/14.i--flex-syntax--stadfa.re:6:7: warning: rule matches empty string [-Wmatch-empty-string]
