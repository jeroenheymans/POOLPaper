#include <iostream>

class A {
	const int a = 1;
	public:
		class B {
			public:
				void print() {
					std::cout << a << std::endl;
				}
		};
};
 
int main()
{
   A* a = new A();
   return 0;
}
