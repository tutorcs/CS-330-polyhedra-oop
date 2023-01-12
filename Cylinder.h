https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#ifndef CYLINDER_H_INCLUDED
#define CYLINDER_H_INCLUDED

#include "Polyhedron.h"

class Cylinder : public Polyhedron {
    private:
        double height;
        double radius;

    public:
        /**
         * Default Constructor
         */
        Cylinder();

        /**
         * Construct a cylinder with
         * specified height and radius 
         */
        Cylinder(double r, double h);

        /**
         * Destructor
         */
        ~Cylinder();


};

#endif