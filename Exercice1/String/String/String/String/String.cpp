#include "String.h"
using namespace std;

const void String::getString() 
{
	for (int i = 0; i < strlen(string); i++) {
		cout << string[i];
	}
	cout << "\n";
}

const void String::lenght() 
{
	cout << strlen(string) << endl;
}
void String::clear() 
{
	memset(string, 0, strlen(string));
}
