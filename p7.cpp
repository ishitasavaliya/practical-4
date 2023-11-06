#include<iostream>
using namespace std;

class student 
{
	private:
		int std_id;
		char name;
		friend void getdata (student s);
		
	public:
		void putdata()
		{
			cout<<"Student Id is   ::"<<std_id<<endl;
			cout<<"Student Name is ::"<<name<<endl;
		}
};

void getdata (student s)
{
	cin>>s.std_id;
	cin>>s.name;
}
int main()
{
	student s1;
	getdata(s1);
	s1.putdata();
	return 0;
}
