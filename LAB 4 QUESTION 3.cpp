#include<iostream>
#include<fstream>
using namespace std;
int main()

{
		int PID;//PID=product ID
		int Quantity;
		char run;
		float PPI,TotalPrice;//PPI=price per item
		const int discount=0.21;
	do{
		ofstream f;
		f.open("Inventory.txt",ios::app);
	
		cout<<"Enter Product Id : ";
		cin>>PID;
		f<<"Product ID : "<<PID<<endl;
		cout<<"Entre Product Quantity :  ";
		cin>>Quantity;
		f<<"Product Quantity : "<<Quantity<<endl;
		cout<<"Price Per Item : ";
		cin>>PPI;
		f<<"Price Per Item : "<<PPI<<endl;
		TotalPrice=PPI*Quantity;
		
	if(Quantity>=30)
	{
		TotalPrice=TotalPrice-(discount*TotalPrice);
		cout<<"Your Total Value of Inventory is : "<<TotalPrice<<endl;
		f<<"Your Total Value Of Inventory With Discount is : "<<TotalPrice<<endl;
	}
	else
	{
		TotalPrice=PPI*Quantity;
		cout<<"Your Total Value Of Inventory is : "<<TotalPrice<<endl;
		f<<"Your Total Value Of Inventory is : "<<TotalPrice<<endl;
		
	} 
	f.close();
	cout<<"Your Data is store successfully"<<endl;

	cout<<" DO You Want to Enter Product Inventory Data Again ? (y/n) :  ";
	cin>>run;
}
	while(run=='y'||run=='Y');
	
	return 0;
	
	
}