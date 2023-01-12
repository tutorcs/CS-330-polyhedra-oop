https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#include "Cylinder.h"

/**
 * 
 */
Cylinder::Cylinder()
    :Polyhedron("Cylinder"),
     height(0),
     radius(0)
{
}

//------------------------HINT------------------------
/**
 * 
 */
Cylinder::Cylinder(double r, double h)
    :Polyhedron("Cylinder"),
     height(h),
     radius(r)
{
    double d = this->getDiameter();
    boundingBox.setUpperRightVertex(d, d, height);
}

/**
 * 
 */
Cylinder::~Cylinder()
{
}
