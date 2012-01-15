class Foo
	attr_accessor :i
	def initialize(i)
		@i = i
	end
end

class Bar < Foo
end

bar = Bar.new(5)
puts bar.i
