// draw_all_shapes.c ///////////////////////////////////////////////////////////

typedef struct shape_t *shape_pointer_t;

void DrawAllShapes(shape_pointer_t *shapes, int n) {
    for (int i = 0; i < n; i++) {
        struct shape_s *shape = shapes[i];
        DrawShape(shape);
    }
}
