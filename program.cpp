#include<iostream>
using namespace std;
class time
{
	public:
		int hrs,mins;
		void get()
		{
			cout<<"ENTER HOURS: ";
			cin>>hrs;
			cout<<endl;
			cout<<"ENTER MINUTES: ";
			cin>>mins;
			cout<<endl;
		}
		time add(time a1,time a2)
		{
			int m;
			time c;
			m=a1.mins+a2.mins;
			if(m<=60)
			{
				c.mins=m;
				c.hrs=a1.hrs+a2.hrs;
			}
			else
			{
				c.mins=m-60;
				c.hrs=a1.hrs+a2.hrs+1;
			}
			return(c);
		}
};
int main()
{
	time t1,t2,t3;
	t1.get();
	t2.get();
	t3=t3.add(t1,t2);
	cout<<"---ADDED TIME---"<<endl;
	cout<<t3.hrs<<" Hrs :"<<t3.mins<<" Mins";
	return(0);
}
		
