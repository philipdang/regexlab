#include <iostream>
#include <ostream>
#include <fstream>
#include <istream>
#include <regex>
#include <string>

using namespace std;

int main(){
    string a;
    ifstream FileIn;
    
    FileIn.open("text.txt");
    FileIn >> a;
    
    regex rgx("\\d+\\.\\d+\\.\\d+\\.\\d+"); //regex IP
    regex rgx2("\\w+\\@\\w+\\.(|\\w+\\.)(edu|us|com)"); //regex email address
    
    sregex_iterator next(a.begin(), a.end(), rgx);
    sregex_iterator end;
    
    while(next != end){
        smatch match = *next;
        cout << match.str() << "\n";
        next++;
    }
    
    
    return 0;
}
