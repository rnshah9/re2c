/* Generated by re2c */
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/04__apache_log.re"
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
    
#line 30 "gen/re2c/04__apache_log-eof-tdfa0.c"
char *yyt1;
char *yyt10;
char *yyt11;
char *yyt12;
char *yyt13;
char *yyt14;
char *yyt15;
char *yyt2;
char *yyt3;
char *yyt4;
char *yyt5;
char *yyt6;
char *yyt7;
char *yyt8;
char *yyt9;
#line 34 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"

    
#line 49 "gen/re2c/04__apache_log-eof-tdfa0.c"
#line 35 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"

    taglistpool_t tlp;
    int eof;
} input_t;

static inline void taglistpool_clear(taglistpool_t *tlp, input_t *in)
{
    tlp->next = tlp->head;
    
#line 60 "gen/re2c/04__apache_log-eof-tdfa0.c"
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
    
#line 118 "gen/re2c/04__apache_log-eof-tdfa0.c"
if (in->yyt1) in->yyt1 -= free;
if (in->yyt10) in->yyt10 -= free;
if (in->yyt11) in->yyt11 -= free;
if (in->yyt12) in->yyt12 -= free;
if (in->yyt13) in->yyt13 -= free;
if (in->yyt14) in->yyt14 -= free;
if (in->yyt15) in->yyt15 -= free;
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
    
#line 155 "gen/re2c/04__apache_log-eof-tdfa0.c"
in->yyt1 = 0;
in->yyt10 = 0;
in->yyt11 = 0;
in->yyt12 = 0;
in->yyt13 = 0;
in->yyt14 = 0;
in->yyt15 = 0;
in->yyt2 = 0;
in->yyt3 = 0;
in->yyt4 = 0;
in->yyt5 = 0;
in->yyt6 = 0;
in->yyt7 = 0;
in->yyt8 = 0;
in->yyt9 = 0;
#line 40 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"

    
#line 174 "gen/re2c/04__apache_log-eof-tdfa0.c"
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
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/04__apache_log.re"


static int lex(input_t *in, Output *out)
{
    const char
        *h1, *i1, *a1, *d1, *r1, *s1, *z1, *u1, *g1,
        *h2, *i2, *a2, *d2, *r2, *s2, *z2, *u2, *g2;

loop:
    in->tok = in->cur;

#line 227 "gen/re2c/04__apache_log-eof-tdfa0.c"
{
	char yych;
	in->yyt1 = in->cur;
yyFillLabel0:
	yych = *in->cur;
	switch (yych) {
		case '.':
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			++in->cur;
			in->yyt15 = in->cur;
			goto yy3;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel0;
				goto yy38;
			}
			++in->cur;
			goto yy1;
	}
yy1:
yy2:
#line 33 "../../../benchmarks/submatch_dfa_aot/src/re2c/04__apache_log.re"
	{ return 1; }
#line 260 "gen/re2c/04__apache_log-eof-tdfa0.c"
yy3:
	in->mar = in->cur;
yyFillLabel1:
	yych = *in->cur;
	switch (yych) {
		case '\t':
		case ' ':
			++in->cur;
			goto yy4;
		case '.':
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			++in->cur;
			in->yyt15 = in->cur;
			goto yy6;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel1;
			}
			goto yy2;
	}
yy4:
yyFillLabel2:
	yych = *in->cur;
	switch (yych) {
		case '\t':
		case ' ':
			++in->cur;
			goto yy4;
		case '-':
			++in->cur;
			in->yyt2 = in->cur;
			goto yy7;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel2;
			}
			goto yy5;
	}
yy5:
	in->cur = in->mar;
	goto yy2;
yy6:
yyFillLabel3:
	yych = *in->cur;
	switch (yych) {
		case '\t':
		case ' ':
			++in->cur;
			goto yy4;
		case '.':
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			++in->cur;
			in->yyt15 = in->cur;
			goto yy6;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel3;
			}
			goto yy5;
	}
yy7:
yyFillLabel4:
	yych = *in->cur;
	switch (yych) {
		case 0x00:
		case '-':
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel4;
			}
			goto yy5;
		default: goto yy9;
	}
yy8:
yyFillLabel5:
	yych = *in->cur;
yy9:
	switch (yych) {
		case '\t':
		case ' ':
			++in->cur;
			goto yy8;
		case '-':
			++in->cur;
			in->yyt3 = in->cur;
			goto yy10;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel5;
			}
			goto yy5;
	}
yy10:
yyFillLabel6:
	yych = *in->cur;
	switch (yych) {
		case 0x00:
		case '[':
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel6;
			}
			goto yy5;
		default: goto yy12;
	}
yy11:
yyFillLabel7:
	yych = *in->cur;
yy12:
	switch (yych) {
		case '\t':
		case ' ':
			++in->cur;
			in->yyt4 = in->cur;
			goto yy11;
		case '[':
			++in->cur;
			goto yy13;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel7;
			}
			goto yy5;
	}
yy13:
yyFillLabel8:
	yych = *in->cur;
	switch (yych) {
		case 0x00:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel8;
				goto yy5;
			}
			++in->cur;
			goto yy14;
		case ']': goto yy5;
		default: goto yy15;
	}
yy14:
yyFillLabel9:
	yych = *in->cur;
yy15:
	switch (yych) {
		case '\n': goto yy5;
		case ']':
			++in->cur;
			in->yyt5 = in->cur;
			goto yy16;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel9;
				goto yy5;
			}
			++in->cur;
			goto yy14;
	}
yy16:
yyFillLabel10:
	yych = *in->cur;
	switch (yych) {
		case 0x00:
		case '"':
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel10;
			}
			goto yy5;
		default: goto yy18;
	}
yy17:
yyFillLabel11:
	yych = *in->cur;
yy18:
	switch (yych) {
		case '\t':
		case ' ':
			++in->cur;
			in->yyt6 = in->cur;
			goto yy17;
		case '"':
			++in->cur;
			goto yy19;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel11;
			}
			goto yy5;
	}
yy19:
yyFillLabel12:
	yych = *in->cur;
	switch (yych) {
		case 0x00:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel12;
				goto yy5;
			}
			++in->cur;
			goto yy20;
		case '"': goto yy5;
		default: goto yy21;
	}
yy20:
yyFillLabel13:
	yych = *in->cur;
yy21:
	switch (yych) {
		case '\n': goto yy5;
		case '"':
			++in->cur;
			in->yyt7 = in->cur;
			goto yy22;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel13;
				goto yy5;
			}
			++in->cur;
			goto yy20;
	}
yy22:
yyFillLabel14:
	yych = *in->cur;
	switch (yych) {
		case 0x00:
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel14;
			}
			goto yy5;
		default: goto yy24;
	}
yy23:
yyFillLabel15:
	yych = *in->cur;
yy24:
	switch (yych) {
		case '\t':
		case ' ':
			++in->cur;
			in->yyt8 = in->cur;
			goto yy23;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			++in->cur;
			in->yyt9 = in->cur;
			goto yy25;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel15;
			}
			goto yy5;
	}
yy25:
yyFillLabel16:
	yych = *in->cur;
	switch (yych) {
		case '\t':
		case ' ':
			++in->cur;
			in->yyt10 = in->cur;
			goto yy26;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			++in->cur;
			in->yyt9 = in->cur;
			goto yy25;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel16;
			}
			goto yy5;
	}
yy26:
yyFillLabel17:
	yych = *in->cur;
	switch (yych) {
		case '\t':
		case ' ':
			++in->cur;
			in->yyt10 = in->cur;
			goto yy26;
		case '-':
			++in->cur;
			in->yyt11 = in->cur;
			goto yy27;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			++in->cur;
			in->yyt11 = in->cur;
			goto yy28;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel17;
			}
			goto yy5;
	}
yy27:
yyFillLabel18:
	yych = *in->cur;
	switch (yych) {
		case 0x00:
		case '"':
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel18;
			}
			goto yy5;
		default: goto yy30;
	}
yy28:
yyFillLabel19:
	yych = *in->cur;
	switch (yych) {
		case '\t':
		case ' ':
			++in->cur;
			in->yyt12 = in->cur;
			goto yy29;
		case '0':
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
			++in->cur;
			in->yyt11 = in->cur;
			goto yy28;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel19;
			}
			goto yy5;
	}
yy29:
yyFillLabel20:
	yych = *in->cur;
yy30:
	switch (yych) {
		case '\t':
		case ' ':
			++in->cur;
			in->yyt12 = in->cur;
			goto yy29;
		case '"':
			++in->cur;
			goto yy31;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel20;
			}
			goto yy5;
	}
yy31:
yyFillLabel21:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy5;
		case '"':
			++in->cur;
			in->yyt13 = in->cur;
			goto yy32;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel21;
				goto yy5;
			}
			++in->cur;
			goto yy31;
	}
yy32:
yyFillLabel22:
	yych = *in->cur;
	switch (yych) {
		case 0x00:
		case '"':
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel22;
			}
			goto yy5;
		default: goto yy34;
	}
yy33:
yyFillLabel23:
	yych = *in->cur;
yy34:
	switch (yych) {
		case '\t':
		case ' ':
			++in->cur;
			in->yyt14 = in->cur;
			goto yy33;
		case '"':
			++in->cur;
			goto yy35;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel23;
			}
			goto yy5;
	}
yy35:
yyFillLabel24:
	yych = *in->cur;
	switch (yych) {
		case '\n': goto yy5;
		case '"':
			++in->cur;
			goto yy36;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel24;
				goto yy5;
			}
			++in->cur;
			goto yy35;
	}
yy36:
yyFillLabel25:
	yych = *in->cur;
	switch (yych) {
		case '\n':
			++in->cur;
			goto yy37;
		default:
			if (in->lim <= in->cur) {
				if (fill(in) == 0) goto yyFillLabel25;
			}
			goto yy5;
	}
yy37:
	h1 = in->yyt1;
	h2 = in->yyt15;
	i2 = in->yyt2;
	a2 = in->yyt3;
	d1 = in->yyt4;
	d2 = in->yyt5;
	r1 = in->yyt6;
	r2 = in->yyt7;
	s1 = in->yyt8;
	s2 = in->yyt9;
	z1 = in->yyt10;
	z2 = in->yyt11;
	u1 = in->yyt12;
	u2 = in->yyt13;
	g1 = in->yyt14;
	i1 = in->yyt2 - 1;
	a1 = in->yyt3 - 1;
	g2 = in->cur - 1;
#line 34 "../../../benchmarks/submatch_dfa_aot/src/re2c/04__apache_log.re"
	{
        OUT("host: ",     h1, h2);
        OUT("userid: ",   i1, i2);
        OUT("authuser: ", a1, a2);
        OUT("date: ",     d1, d2);
        OUT("request: ",  r1, r2);
        OUT("status: ",   s1, s2);
        OUT("size: ",     z1, z2);
        OUT("url: ",      u1, u2);
        OUT("agent: ",    g1, g2);
        outc(out, '\n');
        goto loop;
    }
#line 775 "gen/re2c/04__apache_log-eof-tdfa0.c"
yy38:
#line 5 "../../../benchmarks/submatch_dfa_aot/src/re2c/include-eof/fill.re"
	{ return 0; }
#line 779 "gen/re2c/04__apache_log-eof-tdfa0.c"
}
#line 47 "../../../benchmarks/submatch_dfa_aot/src/re2c/04__apache_log.re"

}
