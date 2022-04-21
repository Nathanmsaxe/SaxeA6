/*
 * String.cpp
 *
 *  Created on: Apr 20, 2022
 *      Author: student
 */
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
	str = new char(SIZE);
	this->len = strlen(rhs.str);
	strcpy(this->str, rhs.str);
	this->len = rhs.len;
	str[len] = '\0';
}
String::String(const char charArr[]){
	str = new char(SIZE);
	this->len = strlen(charArr);
	for(unsigned int i = 0; i <= this->len; i++){
		this->str[i] = charArr[i];
	}
	str[len] = '\0';


}
String String::operator=(const char rhs[]){ //seems good
	this->len = strlen(rhs);
	for(unsigned int i = 0; i < strlen(rhs); i++){
		this->str[i] = rhs[i];
	}
	return *this;

}
String String::operator=(String& rhs){
	strcpy(this->str, rhs.str);
	this->len = rhs.len;
	str[this->len+1] = '\0';

	return *this;
}
char& String::operator[](int pos){
	return this->str[pos];
}
bool String::operator==(String rhs){
	if(rhs.len>this->len || rhs.len<this->len){
		return false;
	}
	else{
		for(unsigned int i = 0; i< this->len; i++){
			if(this->str[i]!=rhs.str[i]){
				return false;
			}
		}
	}
	return true;
}
bool String::operator==(const char rhs[]){
	if(strlen(rhs)>this->len || strlen(rhs)>this->len){
			return false;
	}
	else{
		for(unsigned int i = 0; i< this->len; i++){
			if(this->str[i]!=rhs[i]){
				return false;
			}
		}
	}
	return true;
}
int String::length(){
	return this->len;
}
ostream& operator<< (ostream & os, String& m){ //seems good
	for(unsigned int i = 0 ; i < m.len; i++){
		os << m.str[i];
	}
	return os;
}

String::~String() {
	// TODO Auto-generated destructor stub
	delete[] str;
}



