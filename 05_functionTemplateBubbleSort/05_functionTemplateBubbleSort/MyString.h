#ifndef MY_STRING_H_INCLUDED
#define MY_STRING_H_INCLUDED
#include <iostream>

class MyString {
	int len;
	int bufSize;
	char* buf;
	MyString(int s);

public:
	MyString();
	MyString(const char* str);
	MyString(const MyString& mstr);
	MyString(MyString&& mstr);
	~MyString();
	int length() const;				// 문자열 길이 반환 메소드
	MyString& operator=(const MyString& mstr);
	MyString& operator=(MyString&& mstr);
	MyString operator+(const MyString& mstr) const;				// 문자열 연결 연산자
	MyString& operator+=(const MyString& mstr);
	bool operator==(const MyString& mstr) const;				// ==연산자
	bool operator > (const MyString& mstr) const;				// >연산자
	bool operator<(const MyString& mstr) const;					// <연산자
	char& operator[](int i);
	char operator[](int i)const;
	friend std::ostream& operator<<(std::ostream& os, const MyString& mstr);		// 좌측 ostream 객체, 우측 출력할 mystring 객체
};


// 헤더파일에 같이
// 스트림 출력 연산자
inline std::ostream& operator<<(std::ostream& os, const MyString& mstr)
{	// 소멸자. buf에 연결되어 있는 문자열 저장공간 반납 후 객체 제거
	os << mstr.buf;
	return os;
}
#endif
