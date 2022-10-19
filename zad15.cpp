#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int r = stoi(argv[1]);
	
	int h = 2*r + 1;
	int max_g = 2*h;
	
	for(int i = 0; 1 > i; i++)
	{
		
		cout<<"    ";
		for(int j = 0; (max_g - 8) > j; j++)
			{
				
				//if(j == 1 || j == h || max_g - 8 > j)
				//{
					cout<<"*";
				//}
				
			
			}
			
		cout<<"\n";	
			
			cout<<"  ";
			for(int c = 0; (max_g - 4) > c; c++)
				{
					
					//if(c==2 || c == h-2 || max_g - 4 > c)
					//{
						cout<<"*";
					//}
					
				
				}
				
		cout<<"\n";			
				
				for(int a = 0;  max_g > a; a++)
					{
							
					//	if( i>2 || i < h-2)
					//	{
							
							
							cout<<"*";
							
					//	}
						
						
					}
		cout<<"\n";				
		
		
		
		
	}
		
		for(int s = 0; h-r > s; s++)
		{
		
		if(h-(h-2) > s)
			{
		
			for(int si = 0;  max_g > si; si++)
			
				{
					cout<<"*";
				}
				cout<<"\n";
			}	
		}
	
	
	for(int oi = 0; (h-1) == oi; oi++)
	{
	
		cout<<"  ";
		for(int oj = 0; (max_g - 4) > oj; oj++)
			{
				
				//if(j == 1 || j == h || max_g - 8 > j)
				//{
					cout<<"*";
				//}
				
			
			}
		
	}	
}