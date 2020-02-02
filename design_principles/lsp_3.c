#include "lsp_1.c"

#include <assert.h>

void bar(rectangle_t *r);

void foo(void) {
    square_t *sq = SQ_construct();
    bar(sq);
}

void bar(rectangle_t *r) {
    r->set_height(r, 3);
    r->set_width(r, 4);
    assert(r->area(r) == 12);
}
