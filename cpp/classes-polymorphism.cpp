#include <iostream>

class Animal {
	public:
		virtual void makeNoise() = 0;
};

class Dog: public Animal {
	public:
		void makeNoise() {
			std::cout << "Woof!" << std::endl;
		}
};

class Cat: public Animal {
	public:
		void makeNoise() {
			std::cout << "Meow!" << std::endl;
		}
};
 
int main()
{
   Animal* a = new Dog();
   a->makeNoise();
   Animal* b = new Cat();
   b->makeNoise();
   return 0;
}
