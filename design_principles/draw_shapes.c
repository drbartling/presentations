#include "shape.c"

// draw_all_shapes.c ///////////////////////////////////////////////////////////
typedef struct shape_s *shape_pointer_t;

void DrawAllShapes(shape_pointer_t *shapes, int n) {
    for (int i = 0; i < n; i++) {
        struct shape_s *s = shapes[i];

        switch (s->shape_type) {
        case circle: draw_circle((struct circle_s *)s); break;
        case square: draw_square((struct square_s *)s); break;
        }
    }
}
