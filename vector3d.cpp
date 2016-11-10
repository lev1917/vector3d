#include "vector3d.hpp"

#include <cmath>
#include <iostream>
const vector3d vector3d::X = {1, 0, 0};
const vector3d vector3d::Y = {0, 1, 0};
const vector3d vector3d::Z = {0, 0, 1};
const vector3d vector3d::ZERO = {0, 0, 0};
vector3d::vector3d(int _x=0,int _y=0,int _z=0){
x=_x,y=_y,z=_z;}
vector3d:: vector3d operator+(const vector3d &other) const {return vector3d(x+other.x,y+other.y+z+other.z);}
vector3d::vector3d operator-(const vector3d &other) const {return vector3d(x-other.x,y-other.y,z-other.z);}
vector3d:: vector3d operator^(const vector3d &other) const {return vector3d(y*other.z-z*other.y,z*other.x-x*other.z,x*other.y-y*other.x);}
vector3d::double operator*(const vector3d &other) const {return (x*other.x+y*other.y+z*other.z);}
vector3d::vector3d operator*(double _x) const {return vector3d(x*_x,y*_x,z*_x);}
vector3d::vector3d operator-() const {return (*this)*(-1);}
vector3d::double length() const{return std::pow(((*this)*(*this)),0.5);}
vector3d::void normalize(){double len=(*this).length;
x=x/len;
y=y/len;
z=z/len;}
std::ostream &operator«(std::ostream &stream, const vector3d& a) {
return stream « "{"«a.x«","«a.y«","«a.z«"}";}
vector3d operator*(const double &q, const vector3d &v) const{
return vector3d(v.x*q,v.y*q,v.z*q);}
