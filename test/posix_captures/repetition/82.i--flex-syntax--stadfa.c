/* Generated by re2c */

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':	goto yy3;
	case 'b':	goto yy5;
	case 'c':	goto yy6;
	default:	goto yy2;
	}
yy2:
	yynmatch = 1;
	yypmatch[0] = YYCURSOR;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy7;
	case 'b':	goto yy10;
	case 'c':	goto yy11;
	default:	goto yy4;
	}
yy4:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy2;
	} else {
		yyt2 = yyt1;
		yyt1 = yyt5;
		yyt3 = yyt4 = YYCURSOR;
		goto yy9;
	}
yy5:
	yych = *++YYCURSOR;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy13;
	default:	goto yy4;
	}
yy6:
	yych = *++YYCURSOR;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy7;
	case 'b':	goto yy14;
	case 'c':	goto yy11;
	default:	goto yy4;
	}
yy7:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	yyt2 = yyt5;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy7;
	case 'b':	goto yy15;
	case 'c':	goto yy11;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy9;
	}
yy9:
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[4] = yyt4;
	yypmatch[1] = YYCURSOR;
	yypmatch[5] = YYCURSOR;
	{}
yy10:
	yych = *++YYCURSOR;
	yyt3 = yyt5;
	yyt4 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy7;
	case 'b':	goto yy14;
	case 'c':	goto yy17;
	default:	goto yy4;
	}
yy11:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	yyt1 = YYCURSOR - 1;
yy12:
	switch (yych) {
	case 'a':	goto yy7;
	case 'b':	goto yy14;
	case 'c':	goto yy11;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy9;
	}
yy13:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy18;
	default:	goto yy4;
	}
yy14:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt3 = yyt5;
	yyt4 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy19;
	default:	goto yy4;
	}
yy15:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	yyt3 = yyt5;
	yyt5 = yyt2;
	yyt4 = YYCURSOR - 1;
	yyt5 = yyt2;
	switch (yych) {
	case 'a':	goto yy7;
	case 'b':	goto yy14;
	case 'c':	goto yy17;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy9;
	}
yy16:
	yych = *++YYCURSOR;
	yyt2 = yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'd':	goto yy20;
	default:
		yyt4 = yyt3;
		yyt3 = yyt2;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy9;
	}
yy17:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy7;
	case 'b':	goto yy14;
	case 'c':	goto yy11;
	case 'd':	goto yy22;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy9;
	}
yy18:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':
	case 'b':
	case 'c':	goto yy12;
	default:	goto yy4;
	}
yy19:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'd':	goto yy22;
	default:	goto yy4;
	}
yy20:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'd':	goto yy20;
	default:
		yyt4 = yyt3;
		yyt3 = yyt2;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy9;
	}
yy22:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	yyt1 = yyt4;
	yyt5 = yyt3;
	switch (yych) {
	case 'a':	goto yy7;
	case 'b':	goto yy14;
	case 'c':	goto yy11;
	case 'd':	goto yy16;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy9;
	}
}

posix_captures/repetition/82.i--flex-syntax--stadfa.re:6:7: warning: rule matches empty string [-Wmatch-empty-string]
