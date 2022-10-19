#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	
	int N = stoi(argv[1]);
	
	
	if(N<2)
	cout<<"boom";
	
	if(N>=2)
	{
		
		cout<<"B";
		
		for(int i=0; N>i; i++)
		{
			
			if(N%5==0){
					
				for(int x=0; N>x; x++)
					
					{
					char c = toupper('o');
					cout<<c;
					}
					
						cout<<"M";
						
							if (N%2==0)
							cout<<"!"<<endl;
							return 0;
										
					}
			
			cout<<"o";
		}
		
		cout<<"m";
		
	}
	
	if (N%2==0)
		cout<<"!"<<endl;
		
		return 0;
}
