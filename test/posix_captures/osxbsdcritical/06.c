/* Generated by re2c */
// re2c $INPUT -o $OUTPUT -i --flex-syntax

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *(YYMARKER = YYCURSOR);
	switch (yych) {
	case 'a':
		yyt1 = yyt5 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt1 = yyt3 = yyt4 = yyt5 = YYCURSOR;
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
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'a':
		yyt5 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt4 = NULL;
		yyt2 = yyt3 = YYCURSOR;
		goto yy8;
	default:	goto yy5;
	}
yy5:
	YYCURSOR = YYMARKER;
	if (yyaccept == 0) {
		goto yy2;
	} else {
		goto yy7;
	}
yy6:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case 'b':
		yyt4 = NULL;
		yyt2 = yyt3 = YYCURSOR;
		goto yy8;
	default:	goto yy9;
	}
yy7:
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[4] = yyt4;
	yypmatch[5] = yyt4;
	yypmatch[1] = YYCURSOR;
	{}
yy8:
	yyaccept = 1;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy9:
	switch (yych) {
	case 'a':
		yyt2 = yyt5;
		yyt5 = YYCURSOR;
		goto yy3;
	case 'b':
		yyt5 = yyt2;
		yyt4 = NULL;
		yyt2 = yyt3 = YYCURSOR;
		goto yy8;
	default:
		yyt2 = yyt5;
		goto yy7;
	}
}

posix_captures/osxbsdcritical/06.re:7:7: warning: rule matches empty string [-Wmatch-empty-string]
