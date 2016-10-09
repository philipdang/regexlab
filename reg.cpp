#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <regex>
#include <cstdlib>
//Must be ran in C++11
using namespace std;
int main()
{
	string	fileName="text.txt";
	ifstream infile;
	infile.open(fileName.c_str());
	string readCopy,permCopy;
	while(!infile.eof())
	{
		getline(infile,readCopy);
		permCopy=permCopy+readCopy;
	}

	regex e ("\\d{3}\\.\\d{3}\\.\\d{1}\\.\\d{1}");
	smatch m;		
	while(regex_search(permCopy,m,e))
	{
		for (auto x:m) cout<<x<<" ";
		cout<<endl;
		permCopy=m.suffix().str();
	}
	return 0;
}
