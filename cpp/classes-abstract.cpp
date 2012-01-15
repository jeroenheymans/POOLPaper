#include <iostream>

class A // abstract class
{
	public:
		virtual void print()=0;
};

class B // not an abstract class
{
	public:
		void print() {
			std::cout << "Hello!";
		}
};
 
int main()
{
   A* a = new A(); // compile error here
   B* b = new B(); // this line compiles correctly
   return 0;
}
