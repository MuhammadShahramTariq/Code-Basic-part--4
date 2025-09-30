#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream myfile("shahram.txt");
	
	float readingpercentage;
	int tbr,tba,v;
	cout<<"total book read :";
	cin>>tbr;

	cout<<"total book available :"<<endl;
	cin>>tba;
	 const float threshold=0.50;
	 readingpercentage=(float)tbr/tba*100;
	 cout<<(float)readingpercentage<<endl;
	 v=tba*0.5;
	 if(readingpercentage>v)
	 {
	 	cout<<"you have Achieved";
		myfile<<"it done good"; 	
 	
 	}
 	else if(readingpercentage<v)
 	{
 		cout<<"you have not achieved";
 		myfile<<"you have not achieved ,sorry";
 	}
 	
 	 
 return 0;
}