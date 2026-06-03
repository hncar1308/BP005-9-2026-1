#include <stdio.h>

typedef struct {
    float x;
    float y;
    float theta;
} Pose;

void mover(Pose *p, float dx, float dy) {
    p->x = p->x + dx;
    p->y = p->y + dy;
}

int main() {
    Pose robot = {0.0, 0.0, 0.0};

    mover(&robot, 1.5, 0.8);

    printf("x = %.2f\n", robot.x);
    printf("y = %.2f\n", robot.y);
    printf("theta = %.2f\n", robot.theta);

    return 0;
}
