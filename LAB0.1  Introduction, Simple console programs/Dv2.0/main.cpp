#include <iostream>
using namespace std;

int main()
{
    int number_1, number_2;
	float result ;
	cout << endl <<"This is a simple program caltulating product of two numbers"<<endl;
	cout << "Please enter the first number X=";
	cin >> number_1;
	cout << "Enter a second number Y=";
	cin >> number_2;
    result=number_1*number_2;
	cout<<endl<<"Calculation result X*Y="<<result<<endl; 
	
	
	char response;
    do 
  {
  	
	cout<<endl<<"Do you want to terminate the program (Y/N)?";
	cin>>response;
  } 
  while(response!='Y');
  cout<<endl<<"End of the program"; 
 
}