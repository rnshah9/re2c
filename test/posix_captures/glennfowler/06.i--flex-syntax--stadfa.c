/* Generated by re2c */

{
	YYCTYPE yych;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if (yych >= 0x01) goto yy3;
	yyt1 = YYCURSOR;
yy2:
	yynmatch = 2;
	yypmatch[2] = yyt1;
	yypmatch[0] = yyt1;
	yypmatch[1] = YYCURSOR;
	yypmatch[3] = YYCURSOR;
	{}
yy3:
	++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	goto yy2;
}

posix_captures/glennfowler/06.i--flex-syntax--stadfa.re:5:4: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/06.i--flex-syntax--stadfa.re:6:7: warning: rule matches empty string [-Wmatch-empty-string]
posix_captures/glennfowler/06.i--flex-syntax--stadfa.re:6:7: warning: unreachable rule (shadowed by rule at line 5) [-Wunreachable-rules]
