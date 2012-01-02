class A
	attr_accessor :test
	def initialize
      @test = 1
    end
    def foo
    	return test
    end
end

class B < A
end

class C < B
	def initialize
      @test = 2
    end
end

a = A.new
b = B.new
c = C.new
puts a.test
puts b.test
puts c.test
puts a.foo
puts b.foo
puts c.foo
