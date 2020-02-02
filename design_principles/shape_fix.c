// shape.h /////////////////////////////////////////////////////////////////////
typedef void (*draw_function_t)(void *);
typedef struct point_s {
    double x;
    double y;
} point;
struct shape_s {
    draw_function_t draw;
};
void draw_shape(void *);
// shape.c /////////////////////////////////////////////////////////////////////
void draw_shape(void *shape_in) {
    struct shape_s *shape = (struct shape_s *)shape_in;
    shape->draw(shape);
}

// circle.h ////////////////////////////////////////////////////////////////////
struct circle_s {
    draw_function_t draw;
    double radius;
    point center;
};
void draw_circle(struct circle_s *);
// square.h ////////////////////////////////////////////////////////////////////
struct square_s {
    draw_function_t draw;
    double side;
    point top_left;
};
void draw_square(struct square_s *);
