#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int x = stoi(argv[1]);


	if(x<0)
	cout<<"nie ma ujemnych gwiazdek, koncze ten program"<<endl;
	else
	{
		for(int i=0; x>i; i++)
		{
			cout<<"*";
		}
		return 0;
	}
return 0;

}