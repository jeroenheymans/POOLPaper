#include <iostream>
 
/*class A {
	public:
		A(int);
	private:
		int a;
};*/

class A {
	public:
		virtual void f() = 0;
};
 
int main()
{
   std::cout << "Hello, world!\n";
   return 0;
}
