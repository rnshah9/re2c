/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 5) YYFILL(5);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':
		yyt1 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt1 = yyt2 = yyt3 = YYCURSOR;
		goto yy6;
	default:	goto yy2;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 5) YYFILL(5);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':	goto yy3;
	case 'b':
		yyt2 = yyt3 = YYCURSOR;
		goto yy6;
	default:	goto yy5;
	}
yy5:
	YYCURSOR = YYMARKER;
	goto yy2;
yy6:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':
		yyt4 = YYCURSOR;
		goto yy7;
	default:	goto yy5;
	}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':	goto yy8;
	default:	goto yy5;
	}
yy8:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':	goto yy9;
	default:	goto yy5;
	}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'b':	goto yy11;
	default:	goto yy10;
	}
yy10:
	yynmatch = 4;
	yypmatch[2] = yyt1;
	yypmatch[4] = yyt2;
	yypmatch[6] = yyt3;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = yyt2;
	yypmatch[5] = yyt3;
	yypmatch[7] = YYCURSOR - 3;
	{}
yy11:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'b':	goto yy11;
	default:
		yyt3 = yyt4;
		goto yy10;
	}
}

posix_captures/basic/06.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
