/* Generated by re2c */

{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 6) YYFILL(6);
	yych = *YYCURSOR;
	if (yych >= 0x01) goto yy3;
	yyt1 = yyt2 = yyt3 = YYCURSOR;
yy2:
	yynmatch = 2;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt3;
	yypmatch[3] = yyt2;
	yypmatch[1] = YYCURSOR;
	{}
yy3:
	yych = *++YYCURSOR;
	yyt1 = yyt2 = YYCURSOR - 1;
	if (yych <= 0x00) {
		yyt2 = yyt3 = YYCURSOR;
		goto yy2;
	}
	yych = *++YYCURSOR;
	yyt1 = yyt2;
	if (yych <= 0x00) {
		yyt2 = yyt3 = YYCURSOR;
		goto yy2;
	}
	yych = *++YYCURSOR;
	yyt1 = yyt2;
	if (yych <= 0x00) {
		yyt2 = yyt3 = YYCURSOR;
		goto yy2;
	}
	yych = *++YYCURSOR;
	yyt1 = yyt2;
	if (yych <= 0x00) {
		yyt2 = yyt3 = YYCURSOR;
		goto yy2;
	}
	yych = *++YYCURSOR;
	yyt1 = yyt2;
	yyt3 = YYCURSOR - 1;
	if (yych <= 0x00) {
		yyt2 = YYCURSOR;
		goto yy2;
	}
	++YYCURSOR;
	yyt1 = yyt2;
	yyt2 = YYCURSOR;
	goto yy2;
}

posix_captures/glennfowler/15.i--flex-syntax--stadfa.re:5:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/15.i--flex-syntax--stadfa.re:6:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/15.i--flex-syntax--stadfa.re:6:7: warning: unreachable rule (shadowed by rule at line 5) [-Wunreachable-rules]
