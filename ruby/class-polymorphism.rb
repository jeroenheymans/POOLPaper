class Animal
	def makeNoise
		throw NotImplementedError.new("makeNoise() not implemented")
	end
end

class Dog < Animal
	def makeNoise
		puts "Woof!"
	end
end

class Cat < Animal
	def makeNoise
		puts "Meow!"
	end
end

class Car
	def makeNoise
		puts "Vroom!"
	end
end

def print(animal)
	animal.makeNoise
end

dog = Dog.new
cat = Cat.new
car = Car.new
print(dog)
print(cat)
print(car)
