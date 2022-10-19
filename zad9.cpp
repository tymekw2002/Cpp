#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)

{
	int c;
	
	for (int i = 3; i<argc; i++)
	{
	
	if(stoi(argv[i-2]) == 1)
	{
		
		if(stoi(argv[i-1])== 2)
		{
			
			if(stoi(argv[i])== 1)
			{
				
			
				c++;
			
			
			 } 
		}
			
	}
}
	cout<<c;
	return 0;


}