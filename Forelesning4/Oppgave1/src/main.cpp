// Description: New project
// Author: Jonas Knarbakk (00:55:08-30/01/2017)

#include "Vector3D.hpp"

int main(){

    // Tests to check that my functions works like they are supposed to
    Vector3D vec1(3, 5, 2);
    Vector3D vec2(3, 5, 2);
    std::cout << "Vec1:\n" << vec1 << std::endl << "Vec2:\n" << vec2 << std::endl;

    Vector3D vec3 = vec1 + vec2;
    std::cout << "Vec3 = Vec1 + Vec2:\n";
    std::cout << vec3 << std::endl;

    Vector3D vec4 = vec3 - vec2;
    std::cout << "Vec4 = Vec3 - Vec2:\n";
    std::cout << vec4 << std::endl;

    Vector3D vec5 = vec1 * vec2;
    std::cout << "Vec5 = Vec1 * Vec2:\n";
    std::cout << vec5 << std::endl;

    bool equality = vec1 == vec2;
    std::cout << "Equality test for vec1 == vec2 returned: " << equality << std::endl << std::endl;

    std::cout << "Vec1 lenght is " << vec1.length() << std::endl << std::endl;

    Vector3D vecNorm = vec1.normalize();
    std::cout << "Vec1 normalized is:\n" << vecNorm << std::endl;

    Vector3D vecScal = vec1 * 2;
    std::cout << "Vec1 sacled times 2 is:\n" << vecScal << std::endl;
    
    return 0;
}
