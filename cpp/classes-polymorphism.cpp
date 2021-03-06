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

void print(Animal* a) {
	a->makeNoise();
}
 
int main()
{
   Dog* dog = new Dog();
   Cat* cat = new Cat();
   print(dog);
   print(cat);
   return 0;
}
