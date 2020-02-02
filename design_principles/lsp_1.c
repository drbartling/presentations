// rectangle.h /////////////////////////////////////////////////////////////////
typedef struct rectangle_s {
    double width;
    double height;
    double (*area)(struct rectangle_s *);
    void (*set_width)(struct rectangle_s *, double);
    void (*set_height)(struct rectangle_s *, double);
} rectangle_t;
rectangle_t *REC_construct(void);
// rectangle.c /////////////////////////////////////////////////////////////////
static void REC_set_width(struct rectangle_s *r, double w) { r->width = w; }
static void REC_set_heigth(struct rectangle_s *r, double h) { r->height = h; }
// square.h ////////////////////////////////////////////////////////////////////
typedef struct rectangle_s square_t;
square_t *SQ_construct(void);
// square.c ////////////////////////////////////////////////////////////////////
#include <stdlib.h>
static void SQ_set_side(square_t *sq, double s) {
    sq->width = s;
    sq->height = s;
}
square_t *SQ_construct(void) {
    square_t *sq = calloc(1, sizeof(square_t));
    sq->set_width = SQ_set_side;
    sq->set_height = SQ_set_side;
    return sq;
}
