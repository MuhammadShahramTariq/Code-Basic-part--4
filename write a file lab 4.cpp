#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream f;
f.open("shAH RAM.txt",ios::app);
if(f.is_open())
{
	f<<"i am shahram"<<endl;
	f<<"hi how are you is there any one in home "<<endl;
	f<<"nostalgia "<<endl;
	f<<"SPIDER MAN"<<endl;
	cout<<"file written"<<endl;
	
}
else
{
	cout<<"not found";
}
f.close();

	return 0;

}