/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 6) YYFILL(6);
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
	yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy5;
	case 'b':	goto yy7;
	default:	goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	goto yy2;
yy5:
	yych = *++YYCURSOR;
	yyt1 = yyt3;
	yyt4 = yyt3;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
	case 'b':	goto yy8;
	default:	goto yy6;
	}
yy6:
	yynmatch = 3;
	yypmatch[2] = yyt1;
	yypmatch[4] = yyt2;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt2;
	yypmatch[5] = YYCURSOR;
	{}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy9;
	default:	goto yy4;
	}
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy10;
	default:	goto yy6;
	}
yy9:
	yych = *++YYCURSOR;
	yyt1 = yyt3;
	yyt4 = yyt3;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy5;
	case 'b':	goto yy8;
	default:	goto yy6;
	}
yy10:
	++YYCURSOR;
	yyt1 = yyt4;
	goto yy6;
}

posix_captures/glennfowler/31.i--flex-syntax--stadfa.re:6:7: warning: rule matches empty string [-Wmatch-empty-string]
