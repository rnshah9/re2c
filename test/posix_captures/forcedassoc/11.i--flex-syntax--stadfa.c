/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 7) YYFILL(7);
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
	yyt4 = YYCURSOR - 1;
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
	switch (yych) {
	case 'b':	goto yy8;
	case 'c':	goto yy6;
	default:	goto yy4;
	}
yy6:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'd':	goto yy9;
	default:
		yyt3 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt4;
		goto yy7;
	}
yy7:
	yynmatch = 5;
	yypmatch[2] = yyt1;
	yypmatch[6] = yyt2;
	yypmatch[8] = yyt3;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt2;
	yypmatch[4] = yyt2;
	yypmatch[5] = YYCURSOR;
	yypmatch[7] = yyt3;
	yypmatch[9] = YYCURSOR;
	{}
yy8:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy10;
	default:	goto yy4;
	}
yy9:
	yych = *++YYCURSOR;
	yyt2 = YYCURSOR - 1;
	switch (yych) {
	case 'd':	goto yy11;
	default:
		yyt3 = yyt2;
		yyt2 = yyt1;
		yyt1 = yyt4;
		goto yy7;
	}
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy13;
	default:	goto yy4;
	}
yy11:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'd':	goto yy11;
	default:
		yyt3 = yyt2;
		yyt2 = yyt1;
		yyt1 = yyt4;
		goto yy7;
	}
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy9;
	default:
		yyt3 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt4;
		goto yy7;
	}
}

posix_captures/forcedassoc/11.i--flex-syntax--stadfa.re:6:7: warning: rule matches empty string [-Wmatch-empty-string]
