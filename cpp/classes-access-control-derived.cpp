#include <iostream>

class A {
	public:
		int foo;
		A(): foo(0) {};
};

class B : protected A { };
 
int main()
{
   B* b = new B(); // changing to A* a = new A(); will compile this
   b->foo = 3;
   std::cout << "Value foo: " << b->foo << std::endl;
   return 0;
}
