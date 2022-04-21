#ifndef STRING_H_
#define STRING_H_

#include <iostream>

using namespace std;

class String {
private:
	char* str;
	unsigned int len;
public:
	String();
	String(const String&);
	String(const char[]);
	String operator=(const char[]);
	String operator=(String&);
	char& operator[](int);
	bool operator==(String);
	bool operator==(const char[]);
	int length();
	friend ostream& operator<<(ostream &, String&);
	virtual ~String();
};

#endif /* STRING_H_ */
