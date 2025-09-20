#define HOEMEAN static inline
#include <stdbool.h>
/* types*/

typedef struct
{
    float x, y;
    float w, h;

} RectS;

typedef struct
{
    float x, y;
    float radius;

} CircleS;
typedef struct
{
    float x, y;

} PointS;
/* func decl*/
HOEMEAN RectS InitRect(float x, float y, float w, float h);
HOEMEAN CircleS InitCircle(float x, float y, float radius);
HOEMEAN PointS InitPoint(float x, float);
HOEMEAN bool PointinRect(PointS p, RectS rec);
HOEMEAN bool RectinRect(RectS a, RectS b);
HOEMEAN bool CircleinCircle(CircleS a, CircleS b);
HOEMEAN bool CircleinRectCollision(CircleS c, RectS r);