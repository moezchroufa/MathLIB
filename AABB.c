#include <stdio.h>
#include <math.h>
#include <stdbool.h>

typedef struct{
    float x,y;
    float w,h;
}Rect;

bool AABB(Rect a,Rect b){
    return (fabsf(a.x - b.x) < (a.w/2 + b.w/2) && fabsf(a.y - b.y) < (a.h/2 + b.h/2));

}

int main(){

    Rect r1 = {0.0f, 0.0f, 4.0f, 4.0f};
    Rect r2 = {2.0f, 2.0f, 4.0f, 4.0f};

    if (AABB(r1, r2)) {
        printf("Collision detected between r1 and r2!\n");
    } else {
        printf("No collision between r1 and r2.\n");
    }

    Rect r3 = {10.0f, 10.0f, 2.0f, 2.0f};

    if (AABB(r1, r3)) {
        printf("Collision detected between r1 and r3!\n");
    } else {
        printf("No collision between r1 and r3.\n");
    }

    return 0;
}