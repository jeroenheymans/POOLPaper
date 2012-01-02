class A
	attr_accessor :a
	def initialize
		@a = "a"
	end
	def f
		puts @a
	end
	class B
		attr_accessor :b
		def initialize 
			@b = "b"
		end
		def g
			puts @a
		end
	end
end

b = A::B.new
b.g
a = A.new
a.f
