// Will Hendrickson
// Raytracing in a weekend

#include <math.h>
#include <stdlib.h>
#include <iostream>

class vec3 {
public:
  vec3() {}
  vec3(double c0, double c1, double c2) {c[0] = c0, c[1] = c1, c[2] = c2; }

  double x() const {return c[0];}
  double y() const {return c[1];}
  double z() const {return c[2];}
  double r() const {return c[0];}
  double g() const {return c[1];}
  double b() const {return c[2];}

};
