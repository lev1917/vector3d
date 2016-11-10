#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <ostream>

class vector3d {
public:
    friend vector3d operator*(double x, const vector3d &v) const;
    friend std::ostream &operator«(std::ostream &stream, const vector3d& a) const;
    double x,y,z;
    const static vector3d X;
    const static vector3d Y;
    const static vector3d Z;
    const static vector3d ZERO;
    vector3d(int _x=0,int _y=0,int _z=0);
    vector3d operator+(const vector3d &other) const;
    vector3d operator-(const vector3d &other) const;
    vector3d operator^(const vector3d &other) const;
    double operator*(const vector3d &other)const;
    vector3d operator*(double _x)const;
    vector3d operator-() const;
    double length() const;
    void normalize(); 
};





#endif
