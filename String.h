#ifndef STRING_H_
#define STRING_H_

class String {
private:
	int len;
	char* str;

public:
	String();
	String(const String&);
	String(const char[]);
	String operator=(const char[]);
	String operator=(String);
	char operator[](int);
	bool operator==(String);
	bool operator==(const char[]);
	int length();
	virtual ~String();
};

#endif /* STRING_H_ */
