// shape.h /////////////////////////////////////////////////////////////////////
enum shape_type_t { circle, square };
struct shape_s {
    shape_type_t shape_type;
}

// circle.h ////////////////////////////////////////////////////////////////////
#include "shape.h"
struct circle_s {
    shape_type_t shape_type;
    double       radius;
    point        center;
}

void drawCircle(struct circle_s *);

// square.h ////////////////////////////////////////////////////////////////////
#include "shape.h"
struct square_s {
    shape_type_t shape_type;
    double       side;
    point        top_left;
}

void drawSquare(struct square_s *);
