#include <string>
#include <iostream>

using namespace std;

class Hex
{
private:
	string hexnum; 
public:
	Hex(string);
	void HexToDec(string);
	void HexToBi(string);
};