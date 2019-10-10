#include <iostream>
#include "String/String.h"
using namespace std;

int main() {
	String a("hello");
	String b(a);
	
	a.getString();
	b.getString();
	b.lenght();
	b.clear();
	b.getString();
	a.~String();
	b.~String();
	system("pause");
	return 0;
}