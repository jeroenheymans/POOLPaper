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

if __FILE__ == $0
	cat = Cat.new
	cat.speak
	cat.breath
end
