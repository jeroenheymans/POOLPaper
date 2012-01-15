#include <iostream>

namespace A
{
	const int test = 1;
	void print() {
		std::cout << "Hello!";
	}
	class Foo { };
	namespace B
	{
		class Foo { 
			public:
			void test() {
				std::cout << "Test";
			}
		};	
	}
}

int main() 
{
	A::B::Foo f = A::B::Foo();
	f.test();
	return 0;
}
