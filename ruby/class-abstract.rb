class A
	private_class_method :new
	def print
		puts "Hello!"
	end
end

class B < A
	public_class_method :new
end

b = B.new # will succeed
a = A.new # will fail
