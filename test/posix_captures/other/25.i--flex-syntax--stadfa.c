/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 3) YYFILL(3);
	yych = *YYCURSOR;
	switch (yych) {
	case 'x':	goto yy3;
	case 'y':	goto yy4;
	default:
		yyt1 = yyt2 = yyt3 = yyt4 = yyt5 = YYCURSOR;
		goto yy2;
	}
yy2:
	yynmatch = 3;
	yypmatch[0] = yyt5;
	yypmatch[2] = yyt1;
	yypmatch[3] = yyt2;
	yypmatch[4] = yyt3;
	yypmatch[5] = yyt4;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt1 = yyt3 = yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 'x':	goto yy5;
	case 'y':	goto yy6;
	default:
		yyt2 = yyt4 = YYCURSOR;
		goto yy2;
	}
yy4:
	yych = *++YYCURSOR;
	yyt1 = yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 'x':	goto yy5;
	case 'y':	goto yy6;
	default:
		yyt3 = yyt4 = NULL;
		yyt2 = YYCURSOR;
		goto yy2;
	}
yy5:
	yych = *++YYCURSOR;
	yyt1 = yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'x':	goto yy7;
	case 'y':	goto yy8;
	default:
		yyt2 = yyt4 = YYCURSOR;
		goto yy2;
	}
yy6:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'x':	goto yy7;
	case 'y':	goto yy8;
	default:
		yyt3 = yyt4 = NULL;
		yyt2 = YYCURSOR;
		goto yy2;
	}
yy7:
	++YYCURSOR;
	yyt1 = yyt3 = YYCURSOR - 1;
	yyt2 = yyt4 = YYCURSOR;
	goto yy2;
yy8:
	++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	yyt3 = yyt4 = NULL;
	yyt2 = YYCURSOR;
	goto yy2;
}

posix_captures/other/25.i--flex-syntax--stadfa.re:5:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/other/25.i--flex-syntax--stadfa.re:6:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/other/25.i--flex-syntax--stadfa.re:6:7: warning: unreachable rule (shadowed by rule at line 5) [-Wunreachable-rules]
