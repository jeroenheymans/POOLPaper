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

class Car {
	public:
		void makeNoise() {
			std::cout << "Vroom!" << std::endl;
		}
};

template <class T>
void print(T* a) {
	a->makeNoise();
}
 
int main()
{
   Dog* dog = new Dog();
   Cat* cat = new Cat();
   Car* car = new Car();
   print(dog);
   print(cat);
   print(car);
   return 0;
}
