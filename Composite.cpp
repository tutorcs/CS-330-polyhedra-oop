https://tutorcs.com
WeChat: cstutorcs
QQ: 749389476
Email: tutorcs@163.com
#include "Polyhedron.h"
#include "Composite.h"

/**
 *
 */
Composite::Composite()
    :Polyhedron("Composite"),
     numPolyhedra(0),
     polyhedra(nullptr)
{
}






//------------------------HINT------------------------
/**
 *
 */
void Composite::display(std::ostream& outs) const
{
    Polyhedron::display(outs);

    outs << numPolyhedra << " polyhedra" << "\n";

    for (int i = 0; i < numPolyhedra; i++) {
        //polyhedra[i]->display(outs);
        outs << "  " << (*polyhedra[i]) << "\n";
    }
}


//
/**
 *
 */
Composite& Composite::operator=(Composite rhs)
{
    swap(*this, rhs);

    return *this;
}

/**
 *
 */
void swap(Composite& lhs, Composite& rhs)
{
    using std::swap;

    std::swap(lhs.numPolyhedra, rhs.numPolyhedra);
    std::swap(lhs.polyhedra, rhs.polyhedra);

    // Friend functions allow direct access
    // to all data members.
    // This is well known 3-line
    // swap code
    BoundingBox temp = lhs.boundingBox;
    lhs.boundingBox  = rhs.boundingBox;
    rhs.boundingBox  = temp;
}