// test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class a{
public:
	void b(){
		cout<<"this is a\n";
	}
};
class c:a{
public:
	void b(){
		cout<<"this is b\n";
	}
};
int _tmain(int argc, _TCHAR* argv[])
{
	c d;
	d.b();
	return 0;
}

