#ifndef STRING_H
#define STRING_H

#include <iostream>

class String {
	private:
		char *string= nullptr;
		int size = 0;
		int lenghtOfChar = 0;
	public:
		String(){}
		String(const char *newString);
		String operator+(const String &initialString) const ;
		bool operator==(const String &initialString) const;
		virtual ~String(){}
		const void getString();
		const void lenght();
		void clear();

};


#endif
