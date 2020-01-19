#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>
#include <cmath>



// 2D vector class
/*
Vector2D test1;
Vector2D test2(1.34, 50);
Vector2D test3(3);
Vector2D test4(test2.normalize());
Vector2D test5(test3 + test2);

cout << "Default vector " << test1 << endl;
cout << "Initialization with 2 values " << test2 << endl;
cout << "Initialization with 2 values " << test3 << endl;
cout << "Normalized vector " << test2 << " -> " << test4 << endl;
cout << "Addition " << test3 << " + " << test2 << " = " << test5 << endl;
cout << "Norm and angle " << test2 << " -> "<< test2.norm()<< ", " << test2.angle()<< endl;
cout << "Dot product " << test3 << " . " << test2 << " = " << test3*test2 << endl;
cout << "Scalar multiplication " << test2 << " *7" << " = " << test2*7 << endl;
*/

class Vector2D {
  public:
    Vector2D(float x = 0.0, float y = 0.0) : m_x(x), m_y(y) {}

    float x() { return m_x; }
    float y() { return m_y; }

    float norm() { return sqrt(m_x * m_x + m_y*m_y); }

    Vector2D normalize() {
        float n = norm();
        Vector2D normalized(m_x/n, m_y/n);
        return normalized;
    }

    Vector2D& operator+=(Vector2D const& other) {
        m_x += other.m_x;
        m_y += other.m_y;
        return *this;
    }

    Vector2D& operator*=(float scl) {
        m_x *= scl;
        m_y *= scl;
        return *this;
    }

    Vector2D& operator/=(float scl) {
        m_x /= scl;
        m_y /= scl;
        return *this;
    }

    float angle() const { // Valeurs comprises entre [-pi, pi]
        return atan2(m_y, m_x);
    }

    void display(std::ostream &stream) const {
        stream << "(" << m_x << ", " << m_y << ")";
    }

    float dot(Vector2D const& other) const {
        return m_x * other.m_x + m_y * other.m_y;
    }

  private:
    float m_x;
    float m_y;

};

Vector2D operator+(Vector2D const& a, Vector2D const& b) {
    Vector2D c(a);
    c += b;
    return c;
}

std::ostream &operator<<( std::ostream &stream, Vector2D const& vec) {
    vec.display(stream) ;
    return stream;
}

float operator*(Vector2D const& a, Vector2D const& b) {
    return a.dot(b);
}

Vector2D operator*(Vector2D const& a, float scl) {
    Vector2D b(a);
    b *= scl;
    return b;
}

Vector2D operator/(Vector2D const& a, float scl) {
    Vector2D b(a);
    b /= scl;
    return b;
}

#endif // VECTOR2D_H
