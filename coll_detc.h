#define HOEMEAN static inline
#include <stdbool.h>
#include "LAmath.h"
/* types*/

typedef struct
{
    Vec2f pos;
    float w, h;

} RectS;

typedef struct
{
    Vec2f pos;
    float radius;

} CircleS;
typedef struct
{
    Vec2f pos;

} PointS;

typedef struct
{
    Vec2f start;
    Vec2f end;
} LineS;

typedef struct
{
    Vec2f p1;
    Vec2f p2;
    Vec2f p3;
} TriangleS;

#define POLYGONE_VERTX_MAX 16
typedef struct
{
    Vec2f vertex[POLYGONE_VERTX_MAX];
    int nbVertex; // nb of vertices maybe less than max number (16)
} PolygonS;

/* func decl*/
HOEMEAN RectS InitRect(float x, float y, float w, float h);
HOEMEAN CircleS InitCircle(float x, float y, float radius);
HOEMEAN PointS InitPoint(float x, float);
HOEMEAN LineS InitLine(float sx, float sy, float ex, float ey);
HOEMEAN TriangleS InitTriangle(Vec2f p1, Vec2f p2, Vec2f p3);
HOEMEAN bool PointinRect(PointS p, RectS rec);
HOEMEAN bool RectinRect(RectS a, RectS b);
HOEMEAN bool CircleinCircle(CircleS a, CircleS b);
HOEMEAN bool CircleinRectCollision(CircleS c, RectS r);

/* func imp*/

HOEMEAN RectS InitRect(float x, float y, float w, float h)
{
    return (RectS){.pos = (Vec2f){x, y}, .w = w, .h = h};
}

HOEMEAN CircleS InitCircle(float x, float y, float radius)
{
    return (CircleS){.pos = (Vec2f){x, y}, .radius = radius};
}

HOEMEAN PointS InitPoint(float x, float y)
{
    return (PointS){.pos = (Vec2f){x, y}};
}

HOEMEAN LineS InitLine(float sx, float sy, float ex, float ey)
{
    return (LineS){.start = (Vec2f){sx, sy}, .end = (Vec2f){ex, ey}};
}
