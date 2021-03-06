#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Geometry.h"
#include "Grid.h"

class Triangle : public Geometry
{
public:
    Point a, b, c;
    Vector normal;

public:
    Triangle();
    Triangle(const Point &a, const Point &b, const Point &c, const Vector &normal);
    Triangle(const Point &a, const Point &b, const Point &c);
    virtual Point getCenter() const;
    virtual void getBoundingBox(Point &min, Point &max);
    virtual IntersectResult intersect(Ray &ray);
    bool intersectWithGrid(const Grid &grid);
};

#endif
