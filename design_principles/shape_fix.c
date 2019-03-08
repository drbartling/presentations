// shape.h /////////////////////////////////////////////////////////////////////
enum shape_type_t { circle, square };
void (*DrawFunction)(void *);
struct shape_s {
    DrawFunction draw;
} void
DrawShape(void *);

// shape.c /////////////////////////////////////////////////////////////////////
void
DrawShape(void *shape_in) {
    shape = (struct shape_s *)shape_in;
    shape.draw(shape_in);
}

// circle.h ////////////////////////////////////////////////////////////////////
struct circle_s {
    DrawFunction draw;
    double       radius;
    point        center;
}

void
drawCircle(struct circle_s *);

// square.h ////////////////////////////////////////////////////////////////////
struct square_s {
    DrawFunction draw;
    double       side;
    point        top_left;
}

void
drawSquare(struct square_s *);
