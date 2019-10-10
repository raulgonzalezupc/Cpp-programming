#include "String.h"
using namespace std;

String::String(const char *newString) {
	const char *countSize = newString;
	while (*countSize++)
	{
		size++;
	}
	lenghtOfChar = size + 1;
	string = new char[lenghtOfChar];
	memcpy(string, newString, lenghtOfChar);
}

String String::operator+ (const String  &initialString) const {
	String newString;
	newString.size = size + initialString.size;
	newString.lenghtOfChar = (lenghtOfChar + initialString.lenghtOfChar) - 1;
	newString.string = new char[newString.lenghtOfChar];

	memcpy(newString.string, string, lenghtOfChar - 1);
	int j = size;
	for (int i = 0; i <= initialString.size; i++)
	{
		newString.string[j] = initialString.string[i];
		j++;
	}

	return newString;
}
bool String::operator==(const String &initialString)const
{
	if (size == initialString.size)
	{
		for (int i = 0; i < size; ++i)
		{
			if (initialString.string[i] != string[i])
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	return true;
}
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
