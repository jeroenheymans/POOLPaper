class Animal
	def breath
		puts "Breathe"
	end
	def speak
		puts "Random noise"
	end
end

class Cat < Animal
	def speak
		puts "Meow"
	end
end

c = Cat.new
c.breath
c.speak
