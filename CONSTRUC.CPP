#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
	A()
	{
		a=0;b=0;
	}
	void disp()
	{
		cout<<"Default constructor called..."<<endl;
		cout<<"Numbers : ";
		cout<<a<<" "<<b<<endl;
	}
	A(int x,int y)
	{
		a=x;b=y;
	}
	void show()
	{
		cout<<"Nuumber : ";
		cout<<a<<" "<<b<<endl;
	}
	void add()
	{
		cout<<"Sum : "<<(a+b)<<endl;
	}
	A(A &i,A &j)
	{
		a=i.a;
		b=j.b;
	}
	void val()
	{
		cout<<a<<" "<<b;
	}
};
void main()
{
	int a,b;
	clrscr();
	A ob;
	ob.disp();
	cout<<"Parametrised constructor : "<<endl;
	cout<<"Enter the numbers : ";
	cin>>a>>b;
	A obj(a,b);
	obj.show();
	obj.add();
	cout<<"Copy constructor: ";
	A obj1(10,20);
	obj1.val();
	getch();
}