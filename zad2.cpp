#include <iostream>
#include <string>

using namespace std; 

int main(int argc, char** argv)
{
	int N = stoi(argv[1]);

	for(int i=1; N>=i; i++)
	
	{
		
		cout<<i<<" ";
		
			if(i%3==0)
		{
			cout<<"Fizz";
		}
		
			if(i%5==0)
		{
			cout<<"Buzz";
		}
		
		
		cout<<""<<endl;
	}
	
}
