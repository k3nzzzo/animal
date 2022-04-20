#pragma once
#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <string>
using namespace std;
class Animal {
	string name;
	int age;
public:
	virtual void set();
	virtual void get();
};
class Cat : public Animal {
public:
	void set();
	void get();
};
class Dog : public Animal {
public:
	void set();
	void get();
};
class Parrot : public Animal {
public:
	void set();
	void get();
};
#endif