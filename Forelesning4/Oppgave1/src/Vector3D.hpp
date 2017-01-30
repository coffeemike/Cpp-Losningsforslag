#ifndef VECTOR3D_HPP
#define VECTOR3D_HPP

#include <iostream>

class Vector3D{
    private:
        float m_X;
        float m_Y;
        float m_Z;
    public:
        Vector3D();
        Vector3D(float, float, float);
        ~Vector3D();

        float length() const;
        Vector3D normalize() const;
        void set_x(float x);
        void set_y(float y);
        void set_z(float z);
        float get_x() const;
        float get_y() const;
        float get_z() const;

        // Overloading of the << operator to give sensible output to cout
        friend std::ostream &operator <<(std::ostream &, const Vector3D &);
        // Overloading of the >> operator to send sensible input to cin
        friend std::istream &operator >>(std::istream &, Vector3D &);
        // Overloading of the == operator for equality comparison
        friend bool operator ==(Vector3D &, Vector3D &);
        // Overloading of the + operator for addition
        friend Vector3D operator +(Vector3D &, Vector3D &);
        // Overloading of the - operator for subtraction
        friend Vector3D operator -(Vector3D &, Vector3D &);
        // Overloading of the * operation for scalar multiplication of a vector
        friend Vector3D operator *(Vector3D &, float);
        // Overloading of the * operator for multiplication with another vector
        friend Vector3D operator *(Vector3D &, Vector3D &);
};
#endif
