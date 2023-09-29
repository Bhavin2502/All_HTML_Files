#include<iostream>
using namespace std;
class sum
{
	public:
		sum(int a,int b)
		{
			cout<<"addition of a and b is ="<<a+b;
			cout<<"\nsubtraction of a and b is ="<<a-b;
			cout<<"\nmultiplication of a and b is ="<<a*b;
		}
};
main()
{
	sum add=sum(50,20);
}
