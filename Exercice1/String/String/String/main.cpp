#include <iostream>
#include "String/String.h"
using namespace std;

int main() {
	String a("hello");
	String b(a);
	String c = a + b;

	cout << "A string: "; a.getString();
	cout << "B string: "; b.getString();
	cout << "C string: "; c.getString();
	if (c == "hellohello")
	{
		cout << "True"<<endl;
	}
	else
	{
		cout << "False"<<endl;
	}
	b.lenght();
	b.clear();
	b.getString();
	system("pause");
	return 0;
}