#include<iostream>
using namespace std;
class sum
{
	private:
		int x,y,z;
		public:
			void add()
			{
				cout<<"Enter two number :";
				cin>>x>>y;
				z=x+y;
				cout<<z;
			}
};
main()
{
	sum sm;
	sm.add();
}
