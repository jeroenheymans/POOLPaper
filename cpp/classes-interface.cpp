#include <iostream>

class A // this is an interface
{
	virtual void foo()=0;
	virtual void bar()=0;
};

class B : public A {}; // still an interface

class C : public B // this is an abstract class
{
	public:
	void foo() {
		std::cout << "foo";
	}
};

class D : public C 
{
	public:
	void bar() {
		std::cout << "bar";
	}
};

int main()
{
	D* d = new D();
	d->bar();
	return 0;
}
