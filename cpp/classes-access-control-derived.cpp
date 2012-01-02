#include <iostream>

class A {
	public:
		int foo;
		A(): foo(0) {};
		
	private:
		void f() { std::cout << "Wazaaa" << std::endl; }
};

class B : protected A { };

class C: A { };
 
int main()
{
   /*B* b = new B(); // changing to A* a = new A(); will compile this
   b->foo = 3;
   std::cout << "Value foo: " << b->foo << std::endl;*/
   C* c = new C();
   c->f();
   return 0;
}
