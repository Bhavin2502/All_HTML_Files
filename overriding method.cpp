#include<iostream>
using namespace std;
class parent
{
	public:
		void mobile()
		{
			cout<<"\n I have samsung galaxy device";
			
		}
};
class child :public parent
{
	public:
		void mobile()
		{
			parent::mobile();
			cout<<"\n I have samsung galaxy s4";
		}
};
main()
{
	child obj;
	obj.mobile();
}
