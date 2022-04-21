#include "String.h"
#include <cstring>
#include <iostream>

using namespace std;

const int SIZE = 100;

String::String() {
	// TODO Auto-generated constructor stub
	str = new char(SIZE);
	len = 0;
	str[len] = '\0';

}
String::String(const String& rhs){
	strcpy(this->str, rhs.str);
	this->len = rhs.len;
	str[(rhs.len)+1] = '\0';
}
String::String(const char charArr[]){
	while(charArr[this->len]!=nullptr){
		this->str[this->len] = charArr[this->len];
		this->len++;
	}

}
String String::operator=(const char rhs[]){
	while(rhs[this->len]!=nullptr){
		this->str[this->len] = rhs[this->len];
		this->len++;
	}
	return *this;

}
String String::operator=(String rhs){
	strcpy(this->str, rhs.str);
	this->len = rhs.len;
	str[(rhs.len)+1] = '\0';

	return *this;
}
char String::operator[](int pos){
	return this->str[pos];
}
bool String::operator==(String rhs){
	if(rhs.len>this->len || rhs.len<this->len){
		return false;
	}
	else{
		for(int i = 0; i< this->len; i++){
			if(this->str[i]!=rhs.str[i]){
				return false;
			}
		}
	}
	return true;
}
bool String::operator==(const char rhs[]){
	strcpy()
}
int String::length(){
	return len;
}

String::~String() {
	// TODO Auto-generated destructor stub
	delete[] str;
}
