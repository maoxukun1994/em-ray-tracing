#ifndef SPHERE_H
#define SPHERE_H

#include "Geometry.h"

class Sphere : public Geometry
{
public:
    Point center;
    double radius;

public:
    Sphere(const Point &center, double radius);
    virtual Point getCenter() const;
    virtual void getBoundingBox(Point &min, Point &max);
    virtual IntersectResult intersect(Ray &ray);
};

class RxSphere : public Sphere
{
public:
    int index;

public:
    RxSphere(const Point &center, double radius, int index);
};

#endif
