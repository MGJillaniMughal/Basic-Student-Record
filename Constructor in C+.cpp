#include <iostream>

using namespace std;

class Test
{
	private :
		int phy,cp,mat;
	public :
		Test()
		{
			cout<<"Enter Marks of Physice :"<<endl;
			cin>>phy;
			cout<<"Enter Marks of CP :"<<endl;
			cin>>cp;
			cout<<"Enter Marks of Math :"<<endl;
			cin>>mat;
			
		}
		Test(int p,int c,int mt)
		{
			phy=p;
			cp=c;
			mat=mt;
		}
		void display()
		{
			cout<<"Marks of Phy is : "<<phy<<endl;
			
			cout<<"Marks of CP is : "<<cp<<endl;
			
			cout<<"Marks of Math is : "<<mat<<endl;
		}
};

main()
{
	Test t,f;
	
	t.display();
	f.display();
}
