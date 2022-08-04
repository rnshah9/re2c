/* Generated by re2c */
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/11__alt1_4.re"
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
    
#line 30 "gen/re2c/11__alt1_4-tdfa1.c"
char *yyt1;
char *yyt2;
char *yyt3;
char *yyt4;
char *yyt5;
char *yyt6;
char *yyt7;
char *yyt8;
#line 34 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"

    
#line 42 "gen/re2c/11__alt1_4-tdfa1.c"
#line 35 "../../../benchmarks/submatch_dfa_aot/src/re2c/common.re"

    taglistpool_t tlp;
    int eof;
} input_t;

static inline void taglistpool_clear(taglistpool_t *tlp, input_t *in)
{
    tlp->next = tlp->head;
    
#line 53 "gen/re2c/11__alt1_4-tdfa1.c"
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

#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/include/fill.re"
#line 4 "../../../benchmarks/submatch_dfa_aot/src/re2c/include/fill.re"


#line 97 "gen/re2c/11__alt1_4-tdfa1.c"
#define YYMAXFILL 2
#line 6 "../../../benchmarks/submatch_dfa_aot/src/re2c/include/fill.re"


static inline int fill(input_t *in, size_t need)
{
    size_t free;
    if (in->eof) return 1;

    free = in->tok - in->buf;
    assert(free >= need);

    memmove(in->buf, in->tok, in->lim - in->tok);
    in->lim -= free;
    in->cur -= free;
    in->mar -= free;
    in->tok -= free;
    
#line 116 "gen/re2c/11__alt1_4-tdfa1.c"
if (in->yyt1) in->yyt1 -= free;
if (in->yyt2) in->yyt2 -= free;
if (in->yyt3) in->yyt3 -= free;
if (in->yyt4) in->yyt4 -= free;
if (in->yyt5) in->yyt5 -= free;
if (in->yyt6) in->yyt6 -= free;
if (in->yyt7) in->yyt7 -= free;
if (in->yyt8) in->yyt8 -= free;
#line 21 "../../../benchmarks/submatch_dfa_aot/src/re2c/include/fill.re"


    in->lim += fread(in->lim, 1, free, stdin);

    if (in->lim < in->buf + SIZE) {
        in->eof = 1;
        memset(in->lim, 0, YYMAXFILL);
        in->lim += YYMAXFILL;
    }

    return 0;
}

static inline void init_input(input_t *in)
{
    in->buf = (char*) malloc(SIZE + YYMAXFILL);
    in->lim = in->buf + SIZE;
    in->cur = in->lim;
    in->mar = in->lim;
    in->tok = in->lim;
    
#line 147 "gen/re2c/11__alt1_4-tdfa1.c"
in->yyt1 = 0;
in->yyt2 = 0;
in->yyt3 = 0;
in->yyt4 = 0;
in->yyt5 = 0;
in->yyt6 = 0;
in->yyt7 = 0;
in->yyt8 = 0;
#line 41 "../../../benchmarks/submatch_dfa_aot/src/re2c/include/fill.re"

    
#line 159 "gen/re2c/11__alt1_4-tdfa1.c"
#line 42 "../../../benchmarks/submatch_dfa_aot/src/re2c/include/fill.re"

    taglistpool_init(&in->tlp);
    in->eof = 0;
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
#line 1 "../../../benchmarks/submatch_dfa_aot/src/re2c/11__alt1_4.re"


static int lex(input_t *in, Output *out)
{
    const char
        *a1, *b1, *c1, *d1,
        *a2, *b2, *c2, *d2;
loop:
    in->tok = in->cur;

#line 210 "gen/re2c/11__alt1_4-tdfa1.c"
{
	char yych;
	if ((in->lim - in->cur) < 2) if (fill(in, 2) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case 0x00: goto yy1;
		case '\n':
			in->yyt3 = in->yyt4 = in->yyt5 = in->yyt6 = in->yyt7 = in->yyt8 = NULL;
			in->yyt1 = in->yyt2 = in->cur;
			goto yy4;
		case 'a':
			in->yyt1 = in->cur;
			goto yy5;
		case 'b':
			in->yyt6 = in->cur;
			goto yy6;
		case 'c':
			in->yyt7 = in->cur;
			goto yy7;
		case 'd':
			in->yyt8 = in->cur;
			goto yy8;
		default: goto yy2;
	}
yy1:
	++in->cur;
#line 3 "../../../benchmarks/submatch_dfa_aot/src/re2c/include/fill.re"
	{ return 0; }
#line 239 "gen/re2c/11__alt1_4-tdfa1.c"
yy2:
	++in->cur;
yy3:
#line 11 "../../../benchmarks/submatch_dfa_aot/src/re2c/11__alt1_4.re"
	{ return 1; }
#line 245 "gen/re2c/11__alt1_4-tdfa1.c"
yy4:
	++in->cur;
	a1 = in->yyt1;
	a2 = in->yyt2;
	b1 = in->yyt6;
	b2 = in->yyt3;
	c1 = in->yyt7;
	c2 = in->yyt4;
	d1 = in->yyt8;
	d2 = in->yyt5;
#line 18 "../../../benchmarks/submatch_dfa_aot/src/re2c/11__alt1_4.re"
	{
        if (a1)      { outc(out, 'A'); outs(out, a1, a2); }
        else if (b1) { outc(out, 'B'); outs(out, b1, b2); }
        else if (c1) { outc(out, 'C'); outs(out, c1, c2); }
        else if (d1) { outc(out, 'D'); outs(out, d1, d2); }
        outc(out, '\n');
        goto loop;
    }
#line 265 "gen/re2c/11__alt1_4-tdfa1.c"
yy5:
	yych = *(in->mar = ++in->cur);
	switch (yych) {
		case '\n':
			in->yyt3 = in->yyt4 = in->yyt5 = in->yyt6 = in->yyt7 = in->yyt8 = NULL;
			in->yyt2 = in->cur;
			goto yy4;
		case 'a': goto yy9;
		default: goto yy3;
	}
yy6:
	yych = *(in->mar = ++in->cur);
	switch (yych) {
		case '\n':
			in->yyt1 = in->yyt2 = in->yyt4 = in->yyt5 = in->yyt7 = in->yyt8 = NULL;
			in->yyt3 = in->cur;
			goto yy4;
		case 'b': goto yy11;
		default: goto yy3;
	}
yy7:
	yych = *(in->mar = ++in->cur);
	switch (yych) {
		case '\n':
			in->yyt1 = in->yyt2 = in->yyt3 = in->yyt5 = in->yyt6 = in->yyt8 = NULL;
			in->yyt4 = in->cur;
			goto yy4;
		case 'c': goto yy12;
		default: goto yy3;
	}
yy8:
	yych = *(in->mar = ++in->cur);
	switch (yych) {
		case '\n':
			in->yyt1 = in->yyt2 = in->yyt3 = in->yyt4 = in->yyt6 = in->yyt7 = NULL;
			in->yyt5 = in->cur;
			goto yy4;
		case 'd': goto yy13;
		default: goto yy3;
	}
yy9:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case '\n':
			in->yyt3 = in->yyt4 = in->yyt5 = in->yyt6 = in->yyt7 = in->yyt8 = NULL;
			in->yyt2 = in->cur;
			goto yy4;
		case 'a': goto yy9;
		default: goto yy10;
	}
yy10:
	in->cur = in->mar;
	goto yy3;
yy11:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case '\n':
			in->yyt1 = in->yyt2 = in->yyt4 = in->yyt5 = in->yyt7 = in->yyt8 = NULL;
			in->yyt3 = in->cur;
			goto yy4;
		case 'b': goto yy11;
		default: goto yy10;
	}
yy12:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case '\n':
			in->yyt1 = in->yyt2 = in->yyt3 = in->yyt5 = in->yyt6 = in->yyt8 = NULL;
			in->yyt4 = in->cur;
			goto yy4;
		case 'c': goto yy12;
		default: goto yy10;
	}
yy13:
	++in->cur;
	if (in->lim <= in->cur) if (fill(in, 1) != 0) return 1;
	yych = *in->cur;
	switch (yych) {
		case '\n':
			in->yyt1 = in->yyt2 = in->yyt3 = in->yyt4 = in->yyt6 = in->yyt7 = NULL;
			in->yyt5 = in->cur;
			goto yy4;
		case 'd': goto yy13;
		default: goto yy10;
	}
}
#line 26 "../../../benchmarks/submatch_dfa_aot/src/re2c/11__alt1_4.re"

}
