class Foo
{
	public:
		int foo;
		Foo(int i) : foo(i) { }
};

class Bar : public Foo
{
	
};

int main()
{
	Bar b = Bar(5); // does not work
	Foo f = Foo(5); // works!
	return 0;
}
