#include <string>
using namespace std;
#include <iostream>

string drawFilledBox(int height, int width)
{
	for (int i = 0; i<height;i++)
	{
		for(int j=0;j<width;j++)
		{
			cout << "*";
		}
		cout << ""<<endl;
	}
	return "";

}

string drawEmptyBox(int height, int width)
{
	return "";
}

string drawRightTriangle(int length)
{
	return "";
}

string drawFlippedRightTriangle(int length)
{
	return "";
}

string drawMirroredRightTriangle(int length)
{
	return "";
}

string drawIsosoleseTriangle(int length)
{
	return "";
}
