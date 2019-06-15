#include <iostream>

using namespace std;

void displaymybusinesscard()
	{
    cout <<endl<<endl;
    cout << "Mateusz Drygiel\n";
    cout << "Politechnika Wroclawska\n";
	}
	
void  classifypeopleheight()
{
	int number;
	cout<<endl<<endl;
    cout<<"Please enter the height in cm:"<<endl;
    cin>>number;
    
    if (number > 150 && number <180)
    	cout<<endl<<"The height is: AVERAGE"<<endl;
    if (number < 150)
    	cout<<endl<<"The height is: LOW"<<endl;
    if (number > 180)
    	cout<<endl<<"The height is: HIGH"<<endl;
    
    
}

void classifypressedkeys()
{
	
}

void printchristmastree()
{
    int x;
	cout<<endl<<endl;
    cout<<"HELLO, WELCOME TO TREE MAKER 101!"<<endl;
    cout<<endl<<endl;
    cout<<"Please enter the height of your tree:";
    cin>>x;
    
    int i, k, j;
  for(i=0; i<x; i++)
  { for(k=0; k<(x-i)-1; k++)
  	  {
  		  cout<<" ";
  	  }
  	
  	for(j=0;  j<(i*2)-1; j++)
	  {
	  	
	  	cout<<"*";
	  	
	  }
	  cout<<endl;
  }
 
  for(k=0; k<(x-2); k++)
  	  {
  		  cout<<" "; 
  		  
		}
	cout<<"#";
	
	cout<<endl;
	cout<<"WOW THAT'S A BIG ASS TREE!";
	

}

int main()
{
	int numbofoperation;

	
    cout << "Hello, welcome to program of LAB06a!\n"<<endl;
    cout<<endl;
    
    cout<<"Menu:"<<endl;
    cout<<"1. Display My Business Card"<<endl;
    cout<<"2. Classify People Height"<<endl;
    cout<<"3. Classify Pressed Keys"<<endl;
    cout<<"4. Print Christmas Tree"<<endl;
    
    cout<<"Please select the number of operation: ";
    cin>>numbofoperation;
    
    if(numbofoperation==1)
	{
		displaymybusinesscard();
	}
	 if(numbofoperation==2)
	{
		classifypeopleheight();
	}
	 if(numbofoperation==3)
	{
		classifypressedkeys();
	}
	 if(numbofoperation==4)
	{
		printchristmastree();
	}
    
 
    
    return 0;       
}


	
	
	