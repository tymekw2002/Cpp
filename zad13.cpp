#include <iostream>

using namespace std;
int main(int argc, char** argv)
{
		int w = stoi(argv[1]);
		int h = stoi(argv[2]);
		
		for(float i = 0; w>i ; i += (w-1)/(h-1))
		{
			for(int j = 0; i+1 > j ; ++j)
			{	
			cout << "*";
			}
			
			cout<<"\n";
		}
		return 0;
}