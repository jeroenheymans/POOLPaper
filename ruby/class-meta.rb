#!/usr/bin/env ruby

class A
	private_class_method :new
	def initialize(txt = "Hello!")
		puts txt
	end
end

class B < A
	public_class_method :new
end

if __FILE__ == $0
	puts A.metaclass
end
