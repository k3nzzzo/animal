#include "Animal.h"

void Animal::set()
{
	cout << "enter name: " << endl;
	cin >> name;
	cout << "enter age: " << endl;
	cin >> age;
}

void Animal::get()
{
	cout << "My name is " << name << endl;
	cout << "I am " << age << " years old" << endl;
}

void Cat::set()
{
	Animal::set();
}

void Cat::get()
{
	Animal::get();
	cout << "I can say meow - meow";
}

void Dog::set()
{
	Animal::set();
}

void Dog::get()
{
	Animal::get();
	cout << "I can say woof - woof";
}

void Parrot::set()
{
	Animal::set();
}

void Parrot::get()
{
	Animal::get();
	cout << "I can repeat words";
}
