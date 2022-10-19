#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int r = stoi(argv[1]);
	
	int h = 2*r + 1;
	int max_g = 2*h;
	
	if(r>2)
	{
		
	for(int i = 0; 1 > i; i++)
	{
		
		cout<<"    ";
		for(int j = 0; (max_g - 8) > j; j++)
			{
				
				cout<<"*";

			}
			
		cout<<"\n";	
			
			cout<<"  ";
			for(int c = 0; (max_g - 4) > c; c++)
				{
				
					cout<<"*";
			
				}
				
		cout<<"\n";			
				
				
		
		
	for(int s = 0; h-r > s; s++)
		{
		
		if((h-4) > s)
			{
				
			for(int si = 0;  max_g > si; si++)
			
				{
					cout<<"*";
				}
				
				cout<<"\n";
			}	
		}	
	
	}
		
		cout<<"  ";
			for(int c = 0; (max_g - 4) > c; c++)
				{
				
					cout<<"*";
			
				}
				
		cout<<"\n";		
		
		
		cout<<"    ";
			for(int j = 0; (max_g - 8) > j; j++)
				{
				
					cout<<"*";

				}
			
		cout<<"\n";	
			
	}
	else
	{
		cout<<"  ";
		
			for(int c = 0; (max_g - 4) > c; c++)
				{
				
					cout<<"*";
			
				}
				
		cout<<"\n";	
		
			for(int s = 0; h-r > s; s++)
				{
				
				if((h-2) > s)
					{
						
					for(int si = 0;  max_g > si; si++)
					
						{
							cout<<"*";
						}
						
						cout<<"\n";
					}	
				}	
		
		cout<<"  ";
		
			for(int j = 0; (max_g - 4) > j; j++)
				{
				
					cout<<"*";
			
				}
		
					 
	}	
}
