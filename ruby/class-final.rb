class Class
   def final(klass)
      class << klass
         def inherited(subclass)
            raise RuntimeError, "Illegal attempt to subclass #{self} with #{subclass}"
         end
      end
   end
end

class Foo
   final(self)
   freeze
end

class Foo
	def test
		puts "it works!"
	end
end

Foo.new.test
