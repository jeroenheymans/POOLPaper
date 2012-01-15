#include <iostream>

class A {	
	public:
		void f() { std::cout << "Wazaaa"; }
};

class B : public A { 
	public:
		void f() { A::f(); }
};

class C: private A { };
 
int main()
{
   A* a = new A();
   B* b = new B();
   C* c = new C();
   a->f();
   b->f(); // does not compile
   //c->f(); // does not compile
   return 0;
}
