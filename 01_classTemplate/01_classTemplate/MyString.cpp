#define _CRT_SECURE_NO_DEPRECATE
#include <iostream>
#include <cstring>
#include "MyString.h"

MyString::MyString(int s) :len(s), bufSize(s) {
	buf = new char[s + 1];
	buf[s] = '\0';
}

MyString::MyString() : len(0), bufSize(0)
{
	buf = new char[1];
	buf[0] = '\0';
}

MyString::MyString(const char* str)
{
	len = bufSize = strlen(str);		// 문자열 길이
	buf = new char[len + 1];			// 문자열 저장공간 할당
	strcpy(buf, str);					// 문자열 복사(buf에 str을 복사하게끔)
}

MyString::MyString(const MyString& mstr) : len(mstr.len), bufSize(mstr.len)
{
	buf = new char[len + 1];
	strcpy(buf, mstr.buf);				// mstr.buf<-MyString에 있는 내용을 복사
}

MyString::MyString(MyString&& mstr) : len(mstr.len), bufSize(mstr.bufSize), buf(mstr.buf)	// r-value
{
	mstr.buf = nullptr;
}

MyString::~MyString()
{
	delete[] buf;
}

int MyString::length() const
{
	return len;
}


// 대입연산자
MyString& MyString::operator=(const MyString& mstr)
{
	if (bufSize < mstr.len) {			// 문자열 공간이 필요량보다 작으면
		delete[] buf;					// 기존 공간 반환
		len = bufSize = mstr.len;		// 새로운 문자열 길이
		buf = new char[len + 1];		// 새로운 공간 할당
	}
	else
		len = mstr.len;					// 기존 공간 사용하면서 문자열 길이만 수정
	strcpy(buf, mstr.buf);				// 문자열을 버퍼에 복사
	return *this;						// 참조 반환
}

// 이동대입연산자
MyString& MyString::operator=(MyString&& mstr)
{
	delete[] buf;						// 버퍼 지우고 (메모리 반환)
	len = mstr.len;						// 대입
	bufSize = mstr.bufSize;
	buf = mstr.buf;						// 포인터 복사 (얕은 복사)
	mstr.buf = nullptr;
	return *this;
}

// 문자열 연결 연산자
MyString MyString::operator+(const MyString& mstr) const
{
	MyString tmstr(len + mstr.len);
	strcpy(tmstr.buf, buf);
	strcpy(tmstr.buf + len, mstr.buf);
	return tmstr;
}

MyString& MyString::operator+=(const MyString& mstr)
{
	if (bufSize < len + mstr.len) {			// 버퍼 충분한지 확인
		char* tbuf = new char[(bufSize = len + mstr.len) + 1];
		strcpy(tbuf, buf);					// 기존 버퍼 복사시킨후
		delete[] buf;						// 삭제
		buf = tbuf;
	}
	strcpy(buf + len, mstr.buf);
	len += mstr.len;
	return *this;							// 대입형태 연산자는 그 객체의 참조를 반환 선언
}

bool MyString::operator==(const MyString& mstr) const
{
	return !strcmp(buf, mstr.buf);
}

bool MyString::operator>(const MyString& mstr) const
{
	return strcmp(buf, mstr.buf) > 0;
}

bool MyString::operator<(const MyString& mstr) const
{
	return strcmp(buf, mstr.buf) < 0;
}

// 문자열 개별 문자를 액세스하기 위한 []연산자를 다중정의
char& MyString::operator[](int i)
{
	return buf[i];
}

char MyString::operator[](int i) const
{
	return buf[i];
}