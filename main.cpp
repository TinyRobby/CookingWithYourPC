#include <iostream>
#include <fstream>

using namespace std;

int main() 
{
  
	cout << "Hello! Welcome to \"Cooking with your PC\"!\n\\h for help, \\s to start!";
	string cwp;
  	bool game = true;
  	while(game == true)
  	{
		cin >> cwp;
		if(cwp == "\\h") {
			cout << "Basic commands:\n\\h this\n\\s Start the game" << endl;
		}
		
  	}
}