#ifndef STRING_H
#define STRING_H

#include <iostream>

class String {
	private:
		char string[50];
		int i = 0;
	public:
		String(const char* c)
		{
			memcpy(string, c, 50);
		}
		virtual ~String(){}
		const void getString();
		const void lenght();
		void clear();

};


#endif
