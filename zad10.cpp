#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv)

{
	int c;
	
	for (int i = 3; i<argc; i++)
	{
	
	if(stoi(argv[i-2]) > 1000)
	{
		

		if(stoi(argv[i-1]) > 1000)
		{
			

			if(stoi(argv[i]) > 1000)
			{
				
			
				cout<<i-3;
			
			
			 } 
		}
			
	}
}

	return 0;


}