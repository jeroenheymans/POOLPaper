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

[Dog, Cat].each do |obj|
	a = obj.new
	a.makeNoise
end
