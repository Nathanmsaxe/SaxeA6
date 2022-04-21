#include <iostream>
#include "String.h"
using namespace std;

int main(){
	// test for String assignment using literal
	String s;
	s = "abcde";
	cout << "String s -->" << s << "<-- with length " << s.length() << endl;
	// test for String assignment using String
	String t;
	t = s;
	cout << "String t -->" << t << "<-- with length " << t.length() << endl;
	// test [] overload
	char c = s[3];     // should give me ‘a’
	cout << "s[0] -->" << c << endl;
	// compare Strings s and t
	if (s == t)
	{
		cout << "s and t compare as equal" << endl;
	}
	else
	{
		cout << "s and t compare as not equal" << endl;
	}


}
