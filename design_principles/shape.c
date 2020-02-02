// shape.h /////////////////////////////////////////////////////////////////////
typedef struct point_s {
    double x;
    double y;
} point;

enum shape_type { circle, square };
struct shape_s {
    enum shape_type shape_type;
};
// circle.h ////////////////////////////////////////////////////////////////////
struct circle_s {
    enum shape_type shape_type;
    double radius;
    point center;
};
void drawCircle(struct circle_s *);
// square.h ////////////////////////////////////////////////////////////////////
struct square_s {
    enum shape_type shape_type;
    double side;
    point top_left;
};
void drawSquare(struct square_s *);
