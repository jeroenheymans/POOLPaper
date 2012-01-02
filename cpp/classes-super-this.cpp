#include <iostream>

class A {
	public:
		A(): a(1) { };
		int foo() { return this->a; }
		int a;
};

class B : public A {
	public:
		int foo() { return A::a + this->a; }
};

class C : public B {
	public:
		C(): a(5) { };
		int a;
};
 
int main()
{
   A* a = new A();
   B* b = new B();
   C* c = new C();
   std::cout << a->a << std::endl;
   std::cout << b->a << std::endl;
   std::cout << c->a << std::endl;
   std::cout << a->foo() << std::endl;
   std::cout << b->foo() << std::endl;
   std::cout << c->foo() << std::endl;
   return 0;
}
