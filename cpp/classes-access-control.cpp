#include <iostream>

class A {
	private:
		void foo() { return; }
	public:
		void test(A* a) {
			foo();
			this->foo();
			a->foo();
		}
};
 
int main()
{
   A* a = new A();
   A* b = new A();
   a->test(b);
   return 0;
}
