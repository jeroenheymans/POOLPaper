class A
	private
		def foo
		end
	public
		def test(obj)
			foo
			self.foo
			obj.foo
		end
end

a = A.new
b = A.new
a.test(b)
