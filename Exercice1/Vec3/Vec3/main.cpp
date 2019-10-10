#include "Vec3/Vec3.h"

#include <math.h>
#include <iostream>

int main() 
{
	Vec3<int> a();
	Vec3<float> b(1.6, 5, 7);
	Vec3<float> c(b);
	Vec3<float> d(3.9,9,8);
	Vec3<float> f(b, c);
	b.Normalize();
	cout<<b.distance_to(d)<<endl;
	system("pause");
	return 0;
}

