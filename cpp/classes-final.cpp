#include<iostream>
using namespace std;
 
class Final;
 
class MakeFinal {
	private:
    	MakeFinal() { }
    friend class Final;
};
 
class Final : virtual MakeFinal {
	public:
		Final() { }
};

class Derived : public Final { };
 
int main(int argc, char *argv[])
{
    Final f;
    Derived d;
    return 0;
}
