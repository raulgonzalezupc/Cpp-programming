#ifndef VEC3_H
#define VEC_H
#include <iostream>
#include <math.h>
using namespace std;
template <class T>
class Vec3{
	private:
		T x, y, z;
	public:	
		Vec3() : x() , y() , z() {}
		Vec3(T x, T y, T z) : x(x) , y(y) , z(z) {}
		Vec3<T> operator+(const Vec3<T> &vector1) const
		{
			return Vec3(vector1.x + x, vector1.y + y, vector1.z + z);
		}
		virtual ~Vec3(){}
		void getVec() {
			cout<< "(" << x << "," << y << "," << z << ")" << endl;
		}
		void  Normalize() {
			float module = sqrt(pow(x, 2)+ pow(y, 2)+ pow(z, 2));
			float a = x / module; //x = x/module;
			float b = y / module; //y = y/module;
			float c = z / module; //z = z/module;
			cout << "("<<a<<","<<b<<","<<c<<")"<<endl;
		}
		float distance_to(Vec3 vector1){
			x = vector1.x - x;	y = vector1.y - y;	z = vector1.z - z;
			float module = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
			return module;
		}
		
};

#endif
