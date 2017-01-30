// Description: New Class
// Created by Jonas Knarbakk (00:56:35-30/01/2017)

#include "Vector3D.hpp"
#include <math.h>

Vector3D::Vector3D(){
    m_X = 0;
    m_Y = 0;
    m_Z = 0;
}

Vector3D::Vector3D(float x, float y, float z){
    m_X = x;
    m_Y = y;
    m_Z = z;
}

Vector3D::~Vector3D(){
}

void Vector3D::set_x(float x){
    m_X = x;
}

void Vector3D::set_y(float y){
    m_Y = y;
}

void Vector3D::set_z(float z){
    m_Z = z;
}

float Vector3D::get_x() const{
    return m_X;
}

float Vector3D::get_y() const{
    return m_Y;
}

float Vector3D::get_z() const{
    return m_Z;
}

float Vector3D::length() const{
    return sqrt(((m_X*m_X)+(m_Y*m_Y)+(m_Z*m_Z)));
}

Vector3D Vector3D::normalize() const{
    float x, y, z;
    float length = this->length();
    x = m_X / length;
    y = m_Y / length;
    z = m_Z / length;
    return Vector3D(x, y, z);
}

std::ostream &operator <<(std::ostream &output, const Vector3D &vec){
    output << "x: " << vec.get_x()
        << "\ny: " << vec.get_y()
        << "\nz: " << vec.get_z() << std::endl;
    return output;
}

std::istream &operator >>(std::istream &input, Vector3D &vec){
    float x, y, z;
    std::cout << "x: ";
    std::cin >> x;
    std::cout << "y: ";
    std::cin >> y;
    std::cout << "z: ";
    std::cin >> z;
    vec.set_x(x);
    vec.set_y(y);
    vec.set_z(z);
    return input;
}

bool operator ==(Vector3D &vec1, Vector3D &vec2){
    bool xEqual = vec1.get_x() == vec2.get_x();
    bool yEqual = vec1.get_y() == vec2.get_y();
    bool zEqual = vec1.get_z() == vec2.get_z();
    return xEqual && yEqual && zEqual;
}

Vector3D operator +(Vector3D &vec1, Vector3D &vec2){
    float x = vec1.get_x() + vec2.get_x();
    float y = vec1.get_y() + vec2.get_y();
    float z = vec1.get_z() + vec2.get_z();
    return Vector3D(x, y, z);
}

Vector3D operator -(Vector3D &vec1, Vector3D &vec2){
    float x = vec1.get_x() - vec2.get_x();
    float y = vec1.get_y() - vec2.get_y();
    float z = vec1.get_z() - vec2.get_z();
    return Vector3D(x, y, z);
}

Vector3D operator *(Vector3D &vec, float value){
    float x = vec.get_x() * value;
    float y = vec.get_y() * value;
    float z = vec.get_z() * value;
    return Vector3D(x, y, z);
}

Vector3D operator *(Vector3D &vec1, Vector3D &vec2){
    float x = vec1.get_x() * vec2.get_x();
    float y = vec1.get_y() * vec2.get_y();
    float z = vec1.get_z() * vec2.get_z();
    return Vector3D(x, y, z);
}
