class Animal
	public
	def breath
		puts "Breathe"
	end
	private
	def speak
		puts "Random noise"
	end
end

class Cat < Animal
	public
	def speak
		super
	end
end

if __FILE__ == $0
	cat = Cat.new
	cat.breath
	cat.speak
end
