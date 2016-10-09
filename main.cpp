#include <iostream>
#include <fstream>
#include <string>
#include <regex>
using namespace std;

int main(){

	fstream inFile;
	string textString;

	inFile.open("text.txt");
	getline(inFile, textString);
	
	inFile.close();
	
	smatch result;	
	regex  ipAddress("[[:digit:]]+[[:digit:]]+[[:punct:]]+[[:digit:]]+[[:punct:]]+[[:digit:]]+[[:punct:]]+[[:digit:]]+[[:digit:]]");
	while (regex_search (textString, result, ipAddress)) {
	
		for (auto& x:result) 
		cout << x << ' ' << endl;
			
		textString = result.suffix().str();
		
	
	}
	




return 0;
}
