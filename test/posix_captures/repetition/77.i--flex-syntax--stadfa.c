/* Generated by re2c */

{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 32) YYFILL(32);
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
	yyt2 = yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy7;
	case 'b':	goto yy8;
	case 'c':	goto yy9;
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
		goto yy20;
	}
yy5:
	yych = *++YYCURSOR;
	yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy10;
	default:	goto yy4;
	}
yy6:
	yych = *++YYCURSOR;
	yyt2 = yyt5 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy7;
	case 'b':	goto yy11;
	case 'c':	goto yy9;
	default:	goto yy4;
	}
yy7:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy12;
	case 'b':	goto yy13;
	case 'c':	goto yy14;
	default:	goto yy4;
	}
yy8:
	yych = *++YYCURSOR;
	yyt3 = yyt5;
	yyt2 = yyt5;
	switch (yych) {
	case 'a':	goto yy7;
	case 'b':	goto yy11;
	case 'c':	goto yy15;
	default:	goto yy4;
	}
yy9:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy12;
	case 'b':	goto yy16;
	case 'c':	goto yy14;
	default:	goto yy4;
	}
yy10:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy17;
	default:	goto yy4;
	}
yy11:
	yych = *++YYCURSOR;
	yyt3 = yyt5;
	switch (yych) {
	case 'c':	goto yy18;
	default:	goto yy4;
	}
yy12:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy19;
	case 'b':	goto yy21;
	case 'c':	goto yy22;
	default:	goto yy4;
	}
yy13:
	yych = *++YYCURSOR;
	yyt3 = yyt5;
	yyt5 = yyt2;
	switch (yych) {
	case 'a':	goto yy12;
	case 'b':	goto yy16;
	case 'c':	goto yy23;
	default:	goto yy4;
	}
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy19;
	case 'b':	goto yy24;
	case 'c':	goto yy22;
	default:	goto yy4;
	}
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy12;
	case 'b':	goto yy16;
	case 'c':	goto yy14;
	case 'd':	goto yy25;
	default:	goto yy4;
	}
yy16:
	yych = *++YYCURSOR;
	yyt3 = yyt5;
	switch (yych) {
	case 'c':	goto yy26;
	default:	goto yy4;
	}
yy17:
	yych = *++YYCURSOR;
	yyt2 = yyt5;
	switch (yych) {
	case 'a':	goto yy7;
	case 'b':	goto yy11;
	case 'c':	goto yy9;
	default:	goto yy4;
	}
yy18:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy25;
	default:	goto yy4;
	}
yy19:
	yych = *++YYCURSOR;
	yyt4 = yyt5;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy27;
	case 'b':	goto yy28;
	case 'c':	goto yy29;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy20:
	yynmatch = 3;
	yypmatch[0] = yyt1;
	yypmatch[2] = yyt2;
	yypmatch[3] = yyt3;
	yypmatch[4] = yyt4;
	yypmatch[1] = YYCURSOR;
	yypmatch[5] = YYCURSOR;
	{}
yy21:
	yych = *++YYCURSOR;
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy19;
	case 'b':	goto yy24;
	case 'c':	goto yy31;
	default:	goto yy4;
	}
yy22:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy27;
	case 'b':	goto yy32;
	case 'c':	goto yy29;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy23:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy19;
	case 'b':	goto yy24;
	case 'c':	goto yy22;
	case 'd':	goto yy33;
	default:	goto yy4;
	}
yy24:
	yych = *++YYCURSOR;
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy34;
	default:	goto yy4;
	}
yy25:
	yych = *++YYCURSOR;
	yyt5 = yyt3;
	switch (yych) {
	case 'a':	goto yy12;
	case 'b':	goto yy16;
	case 'c':	goto yy14;
	default:	goto yy4;
	}
yy26:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy33;
	default:	goto yy4;
	}
yy27:
	yych = *++YYCURSOR;
	yyt4 = yyt5;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy35;
	case 'b':	goto yy36;
	case 'c':	goto yy37;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy28:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	yyt5 = yyt4;
	switch (yych) {
	case 'a':	goto yy27;
	case 'b':	goto yy32;
	case 'c':	goto yy38;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy29:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy35;
	case 'b':	goto yy39;
	case 'c':	goto yy37;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy30:
	yych = *++YYCURSOR;
	yyt2 = yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'd':	goto yy40;
	default:
		yyt4 = yyt3;
		yyt3 = yyt2;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy31:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy27;
	case 'b':	goto yy32;
	case 'c':	goto yy29;
	case 'd':	goto yy42;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy32:
	yych = *++YYCURSOR;
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy43;
	default:	goto yy4;
	}
yy33:
	yych = *++YYCURSOR;
	yyt5 = yyt3;
	switch (yych) {
	case 'a':	goto yy19;
	case 'b':	goto yy24;
	case 'c':	goto yy22;
	default:	goto yy4;
	}
yy34:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy42;
	default:	goto yy4;
	}
yy35:
	yych = *++YYCURSOR;
	yyt4 = yyt5;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy44;
	case 'b':	goto yy45;
	case 'c':	goto yy46;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy36:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	yyt5 = yyt4;
	switch (yych) {
	case 'a':	goto yy35;
	case 'b':	goto yy39;
	case 'c':	goto yy47;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy37:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy44;
	case 'b':	goto yy48;
	case 'c':	goto yy46;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy38:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy35;
	case 'b':	goto yy39;
	case 'c':	goto yy37;
	case 'd':	goto yy49;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy39:
	yych = *++YYCURSOR;
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy50;
	default:	goto yy4;
	}
yy40:
	++YYCURSOR;
	if (YYLIMIT <= YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'd':	goto yy40;
	default:
		yyt4 = yyt3;
		yyt3 = yyt2;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy42:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt3;
	yyt5 = yyt2;
	switch (yych) {
	case 'a':	goto yy27;
	case 'b':	goto yy32;
	case 'c':	goto yy29;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy43:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy49;
	default:	goto yy4;
	}
yy44:
	yych = *++YYCURSOR;
	yyt4 = yyt5;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy51;
	case 'b':	goto yy52;
	case 'c':	goto yy53;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy45:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	yyt5 = yyt4;
	switch (yych) {
	case 'a':	goto yy44;
	case 'b':	goto yy48;
	case 'c':	goto yy54;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy46:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy51;
	case 'b':	goto yy55;
	case 'c':	goto yy53;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy47:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy44;
	case 'b':	goto yy48;
	case 'c':	goto yy46;
	case 'd':	goto yy56;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy48:
	yych = *++YYCURSOR;
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy57;
	default:	goto yy4;
	}
yy49:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt3;
	yyt5 = yyt2;
	switch (yych) {
	case 'a':	goto yy35;
	case 'b':	goto yy39;
	case 'c':	goto yy37;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy50:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy56;
	default:	goto yy4;
	}
yy51:
	yych = *++YYCURSOR;
	yyt4 = yyt5;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy58;
	case 'b':	goto yy59;
	case 'c':	goto yy60;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy52:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	yyt5 = yyt4;
	switch (yych) {
	case 'a':	goto yy51;
	case 'b':	goto yy55;
	case 'c':	goto yy61;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy53:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy58;
	case 'b':	goto yy62;
	case 'c':	goto yy60;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy54:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy51;
	case 'b':	goto yy55;
	case 'c':	goto yy53;
	case 'd':	goto yy63;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy55:
	yych = *++YYCURSOR;
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy64;
	default:	goto yy4;
	}
yy56:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt3;
	yyt5 = yyt2;
	switch (yych) {
	case 'a':	goto yy44;
	case 'b':	goto yy48;
	case 'c':	goto yy46;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy57:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy63;
	default:	goto yy4;
	}
yy58:
	yych = *++YYCURSOR;
	yyt4 = yyt5;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy65;
	case 'b':	goto yy66;
	case 'c':	goto yy67;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy59:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	yyt5 = yyt4;
	switch (yych) {
	case 'a':	goto yy58;
	case 'b':	goto yy62;
	case 'c':	goto yy68;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy60:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy65;
	case 'b':	goto yy69;
	case 'c':	goto yy67;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy61:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy58;
	case 'b':	goto yy62;
	case 'c':	goto yy60;
	case 'd':	goto yy70;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy62:
	yych = *++YYCURSOR;
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy71;
	default:	goto yy4;
	}
yy63:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt3;
	yyt5 = yyt2;
	switch (yych) {
	case 'a':	goto yy51;
	case 'b':	goto yy55;
	case 'c':	goto yy53;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy64:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy70;
	default:	goto yy4;
	}
yy65:
	yych = *++YYCURSOR;
	yyt2 = yyt5;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'b':	goto yy72;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy66:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	yyt5 = yyt4;
	switch (yych) {
	case 'a':	goto yy65;
	case 'b':	goto yy69;
	case 'c':	goto yy73;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy67:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy68:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'a':	goto yy65;
	case 'b':	goto yy69;
	case 'c':	goto yy67;
	case 'd':	goto yy74;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy69:
	yych = *++YYCURSOR;
	yyt2 = yyt5;
	yyt3 = YYCURSOR - 1;
	switch (yych) {
	case 'c':	goto yy75;
	default:	goto yy4;
	}
yy70:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt3;
	yyt5 = yyt2;
	switch (yych) {
	case 'a':	goto yy58;
	case 'b':	goto yy62;
	case 'c':	goto yy60;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy71:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy74;
	default:	goto yy4;
	}
yy72:
	yych = *++YYCURSOR;
	yyt5 = yyt2;
	switch (yych) {
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy73:
	yych = *++YYCURSOR;
	yyt1 = YYCURSOR - 1;
	switch (yych) {
	case 'd':	goto yy76;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy74:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	yyt1 = yyt3;
	yyt5 = yyt2;
	switch (yych) {
	case 'a':	goto yy65;
	case 'b':	goto yy69;
	case 'c':	goto yy67;
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
yy75:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'd':	goto yy76;
	default:	goto yy4;
	}
yy76:
	yych = *++YYCURSOR;
	yyt1 = yyt3;
	yyt5 = yyt2;
	switch (yych) {
	case 'd':	goto yy30;
	default:
		yyt3 = yyt4 = YYCURSOR;
		yyt2 = yyt1;
		yyt1 = yyt5;
		goto yy20;
	}
}

posix_captures/repetition/77.i--flex-syntax--stadfa.re:6:7: warning: rule matches empty string [-Wmatch-empty-string]
