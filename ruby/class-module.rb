module Animals
	def foo
		puts "Module A"
	end
end

module B
	def foo
		puts "Module B"
	end
end

class C
	include A
	include B
end

c = C.new
c.foo
