#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string result ;
    string line ;
    cout << "Input kosong jika ingin print program\n";
    cout << "Text akan print dalam sebaris\n\n";
    cout << "Enter text: " << std::endl;
    while ( getline(cin, line) && !line.empty() )
		{
			result += line + " " ;
	    }
    cout << result << '\n' ;
}
