#include <iostream>

class A {
	private:
		int a;
	public:
		A(int newA): a(newA), b(this) { }
		class B {
			public:
				B(A* a): outer(a), test(1) { }
				int f() {
					return outer->a;
				}
				A* outer;
			public:
				int test;
		} b;
		int f() {
			return b.test;
		}
};
 
int main()
{
   A a = A(3);
   std::cout << a.b.f() << std::endl;
   std::cout << a.f() << std::endl;
   return 0;
}
