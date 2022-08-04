/* Generated by re2c */
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/12__alt1_8.re"
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"
#include <assert.h>
#include <stdlib.h>
#include "common.h"

#line 15 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"


typedef struct taglist_t {
    struct taglist_t *pred;
    long dist;
} taglist_t;

typedef struct taglistpool_t {
    taglist_t *head;
    taglist_t *next;
    taglist_t *last;
} taglistpool_t;

typedef struct {
    char *buf;
    char *lim;
    char *cur;
    char *mar;
    char *tok;
    
#line 30 "gen/re2c/12__alt1_8-eof-stadfa.c"
char *yyt1;
char *yyt10;
char *yyt11;
char *yyt12;
char *yyt13;
char *yyt14;
char *yyt15;
char *yyt16;
char *yyt2;
char *yyt3;
char *yyt4;
char *yyt5;
char *yyt6;
char *yyt7;
char *yyt8;
char *yyt9;
#line 34 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"

    
#line 50 "gen/re2c/12__alt1_8-eof-stadfa.c"
#line 35 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"

    taglistpool_t tlp;
    int eof;
} input_t;

static inline void taglistpool_clear(taglistpool_t *tlp, input_t *in)
{
    tlp->next = tlp->head;
    
#line 61 "gen/re2c/12__alt1_8-eof-stadfa.c"
#line 43 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"

}

static inline void taglistpool_init(taglistpool_t *tlp)
{
    static const unsigned size = 1024 * 1024;
    tlp->head = (taglist_t*)malloc(size * sizeof(taglist_t));
    tlp->next = tlp->head;
    tlp->last = tlp->head + size;
}

static inline void taglistpool_free(taglistpool_t *tlp)
{
    free(tlp->head);
    tlp->head = tlp->next = tlp->last = NULL;
}

static inline void taglist(taglist_t **ptl, const char *b, const char *t, taglistpool_t *tlp)
{
#ifdef GROW_MTAG_LIST
    if (tlp->next >= tlp->last) {
        const unsigned size = tlp->last - tlp->head;
        taglist_t *head = (taglist_t*)malloc(2 * size * sizeof(taglist_t));
        memcpy(head, tlp->head, size * sizeof(taglist_t));
        free(tlp->head);
        tlp->head = head;
        tlp->next = head + size;
        tlp->last = head + size * 2;
    }
#else
    assert(tlp->next < tlp->last);
#endif
    taglist_t *tl = tlp->next++;
    tl->pred = *ptl;
    tl->dist = t - b;
    *ptl = tl;
}

#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"
#line 6 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"


static inline int fill(input_t *in)
{
    size_t free;
    if (in->eof) return 1;

    free = in->tok - in->buf;
    assert(free > 0);

    memmove(in->buf, in->tok, in->lim - in->tok);
    in->lim -= free;
    in->cur -= free;
    in->mar -= free;
    in->tok -= free;
    
#line 119 "gen/re2c/12__alt1_8-eof-stadfa.c"
if (in->yyt1) in->yyt1 -= free;
if (in->yyt10) in->yyt10 -= free;
if (in->yyt11) in->yyt11 -= free;
if (in->yyt12) in->yyt12 -= free;
if (in->yyt13) in->yyt13 -= free;
if (in->yyt14) in->yyt14 -= free;
if (in->yyt15) in->yyt15 -= free;
if (in->yyt16) in->yyt16 -= free;
if (in->yyt2) in->yyt2 -= free;
if (in->yyt3) in->yyt3 -= free;
if (in->yyt4) in->yyt4 -= free;
if (in->yyt5) in->yyt5 -= free;
if (in->yyt6) in->yyt6 -= free;
if (in->yyt7) in->yyt7 -= free;
if (in->yyt8) in->yyt8 -= free;
if (in->yyt9) in->yyt9 -= free;
#line 21 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"


    in->lim += fread(in->lim, 1, free, stdin);
    in->lim[0] = 0;

    if (in->lim < in->buf + SIZE) {
        in->eof = 1;
    }

    return 0;
}

static inline void init_input(input_t *in)
{
    in->buf = (char*) malloc(SIZE + 1);
    in->lim = in->buf + SIZE;
    in->cur = in->lim;
    in->mar = in->lim;
    in->tok = in->lim;
    
#line 157 "gen/re2c/12__alt1_8-eof-stadfa.c"
in->yyt1 = 0;
in->yyt10 = 0;
in->yyt11 = 0;
in->yyt12 = 0;
in->yyt13 = 0;
in->yyt14 = 0;
in->yyt15 = 0;
in->yyt16 = 0;
in->yyt2 = 0;
in->yyt3 = 0;
in->yyt4 = 0;
in->yyt5 = 0;
in->yyt6 = 0;
in->yyt7 = 0;
in->yyt8 = 0;
in->yyt9 = 0;
#line 40 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"

    
#line 177 "gen/re2c/12__alt1_8-eof-stadfa.c"
#line 41 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"

    taglistpool_init(&in->tlp);
    in->eof = 0;
    fill(in);
}
#line 81 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"


static inline void free_input(input_t *in)
{
    free(in->buf);
    taglistpool_free(&in->tlp);
}

static int lex(input_t *in, Output *out);

int main(int argc, char **argv)
{
    PRE;
    input_t in;
    Output out;

    init_input(&in);
    init_output(&out);

    switch (lex(&in, &out)) {
        case 0:  break;
        case 1:  fprintf(stderr, "*** %s: syntax error\n", argv[0]); break;
        case 2:  fprintf(stderr, "*** %s: yyfill error\n", argv[0]); break;
        default: fprintf(stderr, "*** %s: panic\n", argv[0]); break;
    }

    flush(&out);
    free_output(&out);
    free_input(&in);

    POST;
    return 0;
}
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/12__alt1_8.re"


static int lex(input_t *in, Output *out)
{
    const char
        *a1, *b1, *c1, *d1, *e1, *f1, *g1, *h1,
        *a2, *b2, *c2, *d2, *e2, *f2, *g2, *h2;
loop:
    in->tok = in->cur;

#line 229 "gen/re2c/12__alt1_8-eof-stadfa.c"
{
	char yych;
yyFillLabel0:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy3;
		case 'a': goto yy5;
		case 'b': goto yy6;
		case 'c': goto yy7;
		case 'd': goto yy8;
		case 'e': goto yy9;
		case 'f': goto yy10;
		case 'g': goto yy11;
		case 'h': goto yy12;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel0;
				goto yy30;
			}
			goto yy1;
	}
yy1:
	++in->cur;
yy2:
#line 11 "../../../benchmarks/submatch_dfa_aot/src/re2c/12__alt1_8.re"
	{ return 1; }
#line 256 "gen/re2c/12__alt1_8-eof-stadfa.c"
yy3:
	++in->cur;
	in->yyt3 = in->yyt4 = in->yyt5 = in->yyt6 = in->yyt7 = in->yyt8 = in->yyt9 = in->yyt10 = in->yyt11 = in->yyt12 = in->yyt13 = in->yyt14 = in->yyt15 = in->yyt16 = NULL;
	in->yyt1 = in->yyt2 = in->cur - 1;
yy4:
	a1 = in->yyt1;
	a2 = in->yyt2;
	b1 = in->yyt3;
	b2 = in->yyt4;
	c1 = in->yyt5;
	c2 = in->yyt6;
	d1 = in->yyt7;
	d2 = in->yyt8;
	e1 = in->yyt9;
	e2 = in->yyt10;
	f1 = in->yyt11;
	f2 = in->yyt12;
	g1 = in->yyt13;
	g2 = in->yyt14;
	h1 = in->yyt15;
	h2 = in->yyt16;
#line 22 "../../../benchmarks/submatch_dfa_aot/src/re2c/12__alt1_8.re"
	{
        if (a1)      { outc(out, 'A'); outs(out, a1, a2); }
        else if (b1) { outc(out, 'B'); outs(out, b1, b2); }
        else if (c1) { outc(out, 'C'); outs(out, c1, c2); }
        else if (d1) { outc(out, 'D'); outs(out, d1, d2); }
        else if (e1) { outc(out, 'E'); outs(out, e1, e2); }
        else if (f1) { outc(out, 'F'); outs(out, f1, f2); }
        else if (g1) { outc(out, 'G'); outs(out, g1, g2); }
        else if (h1) { outc(out, 'H'); outs(out, h1, h2); }
        outc(out, '\n');
        goto loop;
    }
#line 291 "gen/re2c/12__alt1_8-eof-stadfa.c"
yy5:
	in->mar = ++in->cur;
	in->yyt1 = in->cur - 1;
yyFillLabel1:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy14;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel1;
			}
			goto yy2;
	}
yy6:
	in->mar = ++in->cur;
	in->yyt3 = in->cur - 1;
yyFillLabel2:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy16;
		case 'b': goto yy17;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel2;
			}
			goto yy2;
	}
yy7:
	in->mar = ++in->cur;
	in->yyt5 = in->cur - 1;
yyFillLabel3:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy18;
		case 'c': goto yy19;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel3;
			}
			goto yy2;
	}
yy8:
	in->mar = ++in->cur;
	in->yyt7 = in->cur - 1;
yyFillLabel4:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy20;
		case 'd': goto yy21;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel4;
			}
			goto yy2;
	}
yy9:
	in->mar = ++in->cur;
	in->yyt9 = in->cur - 1;
yyFillLabel5:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy22;
		case 'e': goto yy23;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel5;
			}
			goto yy2;
	}
yy10:
	in->mar = ++in->cur;
	in->yyt11 = in->cur - 1;
yyFillLabel6:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy24;
		case 'f': goto yy25;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel6;
			}
			goto yy2;
	}
yy11:
	in->mar = ++in->cur;
	in->yyt13 = in->cur - 1;
yyFillLabel7:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy26;
		case 'g': goto yy27;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel7;
			}
			goto yy2;
	}
yy12:
	in->mar = ++in->cur;
	in->yyt15 = in->cur - 1;
yyFillLabel8:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy28;
		case 'h': goto yy29;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel8;
			}
			goto yy2;
	}
yy13:
	++in->cur;
	in->yyt3 = in->yyt4 = in->yyt5 = in->yyt6 = in->yyt7 = in->yyt8 = in->yyt9 = in->yyt10 = in->yyt11 = in->yyt12 = in->yyt13 = in->yyt14 = in->yyt15 = in->yyt16 = NULL;
	in->yyt2 = in->cur - 1;
	goto yy4;
yy14:
	++in->cur;
yyFillLabel9:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy13;
		case 'a': goto yy14;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel9;
			}
			goto yy15;
	}
yy15:
	in->cur = in->mar;
	goto yy2;
yy16:
	++in->cur;
	in->yyt1 = in->yyt2 = in->yyt5 = in->yyt6 = in->yyt7 = in->yyt8 = in->yyt9 = in->yyt10 = in->yyt11 = in->yyt12 = in->yyt13 = in->yyt14 = in->yyt15 = in->yyt16 = NULL;
	in->yyt4 = in->cur - 1;
	goto yy4;
yy17:
	++in->cur;
yyFillLabel10:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy16;
		case 'b': goto yy17;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel10;
			}
			goto yy15;
	}
yy18:
	++in->cur;
	in->yyt1 = in->yyt2 = in->yyt3 = in->yyt4 = in->yyt7 = in->yyt8 = in->yyt9 = in->yyt10 = in->yyt11 = in->yyt12 = in->yyt13 = in->yyt14 = in->yyt15 = in->yyt16 = NULL;
	in->yyt6 = in->cur - 1;
	goto yy4;
yy19:
	++in->cur;
yyFillLabel11:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy18;
		case 'c': goto yy19;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel11;
			}
			goto yy15;
	}
yy20:
	++in->cur;
	in->yyt1 = in->yyt2 = in->yyt3 = in->yyt4 = in->yyt5 = in->yyt6 = in->yyt9 = in->yyt10 = in->yyt11 = in->yyt12 = in->yyt13 = in->yyt14 = in->yyt15 = in->yyt16 = NULL;
	in->yyt8 = in->cur - 1;
	goto yy4;
yy21:
	++in->cur;
yyFillLabel12:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy20;
		case 'd': goto yy21;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel12;
			}
			goto yy15;
	}
yy22:
	++in->cur;
	in->yyt1 = in->yyt2 = in->yyt3 = in->yyt4 = in->yyt5 = in->yyt6 = in->yyt7 = in->yyt8 = in->yyt11 = in->yyt12 = in->yyt13 = in->yyt14 = in->yyt15 = in->yyt16 = NULL;
	in->yyt10 = in->cur - 1;
	goto yy4;
yy23:
	++in->cur;
yyFillLabel13:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy22;
		case 'e': goto yy23;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel13;
			}
			goto yy15;
	}
yy24:
	++in->cur;
	in->yyt1 = in->yyt2 = in->yyt3 = in->yyt4 = in->yyt5 = in->yyt6 = in->yyt7 = in->yyt8 = in->yyt9 = in->yyt10 = in->yyt13 = in->yyt14 = in->yyt15 = in->yyt16 = NULL;
	in->yyt12 = in->cur - 1;
	goto yy4;
yy25:
	++in->cur;
yyFillLabel14:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy24;
		case 'f': goto yy25;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel14;
			}
			goto yy15;
	}
yy26:
	++in->cur;
	in->yyt1 = in->yyt2 = in->yyt3 = in->yyt4 = in->yyt5 = in->yyt6 = in->yyt7 = in->yyt8 = in->yyt9 = in->yyt10 = in->yyt11 = in->yyt12 = in->yyt15 = in->yyt16 = NULL;
	in->yyt14 = in->cur - 1;
	goto yy4;
yy27:
	++in->cur;
yyFillLabel15:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy26;
		case 'g': goto yy27;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel15;
			}
			goto yy15;
	}
yy28:
	++in->cur;
	in->yyt1 = in->yyt2 = in->yyt3 = in->yyt4 = in->yyt5 = in->yyt6 = in->yyt7 = in->yyt8 = in->yyt9 = in->yyt10 = in->yyt11 = in->yyt12 = in->yyt13 = in->yyt14 = NULL;
	in->yyt16 = in->cur - 1;
	goto yy4;
yy29:
	++in->cur;
yyFillLabel16:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy28;
		case 'h': goto yy29;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel16;
			}
			goto yy15;
	}
yy30:
#line 5 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"
	{ return 0; }
#line 554 "gen/re2c/12__alt1_8-eof-stadfa.c"
}
#line 34 "../../../benchmarks/submatch_dfa_aot/src/re2c/12__alt1_8.re"

}
