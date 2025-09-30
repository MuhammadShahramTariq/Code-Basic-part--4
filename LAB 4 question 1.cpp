#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	const int a_ASSCI =97;
	const int z_ASSCI =122;
	const int A_ASSCI =65;
	const int Z_ASSCI =90;
	const int NUM0_ASSCI =48;
	const int NUM9_ASSCI =57;
	int asci;
	char letter;
	ofstream f;
	f.open("character classification.txt,ios::app");
	cout<<"please enter a  single char : ";
	cin>>letter;
	asci=(int)letter;
	f<<"CHARACTER :";
	f<<"Classification :";
	if(asci>=a_ASSCI&&asci<=z_ASSCI)
	{
	cout<<" LOWER CASE";
	f<<"lower case letter"<<endl;
	cout<<"data is store in file successfully"<<endl;}
	
	else if(asci>=A_ASSCI&&asci<=Z_ASSCI)
	{
		cout<<"UPPER CASE "<<endl;
			f<<"upper case letter"<<endl;
			cout<<"data is store in file successfully"<<endl;
	}
		else if(asci>=NUM0_ASSCI&&asci<=NUM9_ASSCI)
	{
		cout<<"DIGIT"<<endl;
			f<<"digit case letter"<<endl;
				cout<<"data is store in file successfully"<<endl;
	}
	else
	{
	cout<<"invail character";
		f<<"invail case letter"<<endl;
			cout<<"data is store in file successfully"<<endl;
		}
	f.close();
	return 0;
}