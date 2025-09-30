#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int id;
	float bs;
	float ts;
	const float p1=0.50;
	const float p2=0.20;
	char Continue;
	do
	{
	ofstream f;
	 f.open("Employees.txt",ios::app);

	 
	cout<<"ENTER ID :";
	cin>>id;
	cout<<"Enter current saalry :";
	cin>>bs;
	if(bs>=500&&bs<1000)
{
ts=bs+(p1*bs);

	f<<"ID :"<<id<<"\t"<<"Base salary :"<<bs<<"\t"<<"Total salary :"<<ts<<endl;
	
	cout<<"Your total  salary is : "<<ts<<endl;	
}
 else if(bs>1000)
{
	ts=bs+(p2*bs);
	f<<"ID :"<<id<<"\t"<<"Base salary :"<<bs<<"\t"<<"Total salary :"<<ts<<endl;
	cout<<"Your total salry is : "<<ts<<endl;
	
}
f.close();
cout<<"Your data is store successfully "<<endl;
cout<<"Do You Want to Enter Another Employee ? (y/n) : ";
cin>>Continue;
}
while(Continue=='y'||Continue=='Y');

return 0;

}