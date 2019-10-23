#include<iostream>
#include<string>
using namespace std;

class Darshana{
	public:
		string fullname;
		string hometown;
		int age;
};

int main()
{
	Darshana Adithya;

	Adithya.fullname = "Adithya Bandara";
	Adithya.hometown = "Kurunegala";
	Adithya.age= 22;
	
	Darshana Sutin;
	
	Sutin.fullname = "Hashan Chandima";
	Sutin.hometown = "Kurunegala";
	Sutin.age = 20;
	
	Darshana Thusitha;
	
	Thusitha.fullname = "Thusitha Karunathilaka";
	Thusitha.hometown = "Kuliyapitiya";
	Thusitha.age = 22;
	
	cout<<Adithya.fullname<<" "<<Adithya.hometown<<" "<<Adithya.age<<endl;
	cout<<Sutin.fullname<<" "<<Sutin.hometown<<" "<<Sutin.age<<endl;
	cout<<Thusitha.fullname<<" "<<Thusitha.hometown<<" "<<Thusitha.age<<endl;
			
	
}
