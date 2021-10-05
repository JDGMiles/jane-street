#include <iostream>
#include <math.h>
#include <string>

using namespace std;

float ecss(int columns) // empty column subset size
{
	return columns;
}

int main()
{
	int n=5;
	int probability=ecss(6);
cout << probability;

return 0;
}
