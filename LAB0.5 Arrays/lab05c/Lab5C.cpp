#include<iostream>
#include<cstdlib>
#include<ctime>




using namespace std;
int main()
{
	cout<<"Welcome to program of LAB05c!"<<endl<<endl;
	
    int X=0,t1=0,t2=0,t3=0,counter=0, x=0, q=0, r=0, s=0, z=0, y=0;
    srand(time(NULL));
    
	 
	     
    cout<<"Choose the amount of numbers you want printed from range [-10,10]:  ";
    cin>>X;
    cout<<endl;
    
    int Tab[X];
    
    for(x=0;x<X;x++)
    {
        Tab[x]=rand()%21-10;
        cout<<Tab[x]<<endl;
    }
    
    for(q=0;q<(X-1);q++)
    {
        if(Tab[q]>Tab[q+1])
        {
            t1=1;
            break;
        }
    }
    
    for(r=0;r<(X-1);r++)
    {
        if(Tab[r]<Tab[r+1])
        {
            t2=1;
            break;
        }
    }
    
    cout<<endl;
    
    if(t1==1)
    {
        cout<<"Numbers are not arranged in ascending order"<<endl;
    }
    else
    {
        cout<<"Numbers are arranged in ascending order"<<endl;
    }
    
    if(t2==1)
    {
        cout<<"Numbers are not arranged in descending order"<<endl;
    }
    else
    {
        cout<<"Numbers are arranged in descending order"<<endl;
    }
    
	for(s=0;s<(X-1);s++)
    {
        if(Tab[s]!=Tab[(X-1)-s])
        {
            t3=1;
            break;
        }
    }
    
    if(t3==0)
    {
        cout<<"The array has symmetric content!"<<endl;
    }
    else
    {
        cout<<"The array doesn't have symmetric content!"<<endl;
    }
    
    for(z=0;z<X;z++)
    {
        for(y=0;y<X;y++)
        {
            if(Tab[z]==Tab[y])
            {
                counter++;
            }
        }
    }
    
    if(X!=counter)
    {
        cout<<"There is at least one duplicate in array!"<<endl;
    }
    else
    {
        cout<<"There is no duplicate in the array!"<<endl;
    }
}

