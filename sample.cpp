#include <iostream>
#include <string>

using namespace std;

void print(string str)
{
	cout<<str<<"\n";	
}

class test
{
	public:
		int a,b;
	public:
		test(int n,int m)
		{
			a = n;
			b = m;
		}
		void print_sum()
		{
			cout<<"added a+b = "<<a+b<<"\n";
		}		
};

int main()
{
	print("jai jai ganesh deva 1513 108");

	test t(4,8);
	t.print_sum();

	return 0;
}
