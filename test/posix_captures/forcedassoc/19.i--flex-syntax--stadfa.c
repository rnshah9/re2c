/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':	goto yy3;
	case 'b':	goto yy5;
	default:	goto yy2;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt2 = yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy7;
	case 'b':	goto yy9;
	default:	goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	++YYCURSOR;
	yyt1 = yyt2 = YYCURSOR - 1;
yy6:
	yynmatch = 3;
	yypmatch[2] = yyt2;
	yypmatch[4] = yyt1;
	yypmatch[0] = yyt2;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt1;
	yypmatch[5] = YYCURSOR;
	{}
yy7:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy7;
	case 'b':	goto yy9;
	default:	goto yy4;
	}
yy9:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy10;
	default:	goto yy6;
	}
yy10:
	++YYCURSOR;
	yyt1 = yyt3;
	goto yy6;
}

posix_captures/forcedassoc/19.i--flex-syntax--stadfa.re:6:7: warning: rule matches empty string [-Wmatch-empty-string]
