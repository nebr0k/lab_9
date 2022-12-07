#pragma once
#include<iostream>
#include"D1.h"

class D2 : private D1
{
private:
	int d2;
public:
	D2(int d2,int d1,int b2,int b1);
	~D2() {};
	void show_D2();
};

