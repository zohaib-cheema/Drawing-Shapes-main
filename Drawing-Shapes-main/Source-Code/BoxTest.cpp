#include <iostream>
#include <string>
#include "BoxDrawing.h"
#include "../helper/TestHelper.h"
using namespace std;

const string EXAMPLE_SOLID_BOX = "*****\n*****\n*****\n*****\n*****\n";
const string EXAMPLE_EMPTY_BOX = "*****\n*   *\n*   *\n*   *\n*****\n";
const string EXAMPLE_RIGHT_TRIANGLE = "*\n**\n***\n****\n*****\n";
const string EXAMPLE_FLIPPED_RIGHT_TRIANGLE = "*****\n****\n***\n**\n*\n";
const string EXAMPLE_MIRRORED_RIGHT_TRIANGLE = "    *\n   **\n  ***\n ****\n*****\n";
const string EXAMPLE_ISOSOLESE_TRIANGLE = "    *\n   ***\n  *****\n *******\n*********\n";

string testFilledBox()
{
	string results;
    string testError = "drawFilledBox() failed: ";
    results += checkEquals("\n" + drawFilledBox(5, 5), "\n" + EXAMPLE_SOLID_BOX, "5, 5", testError);
    return results;
}

string testEmptyBox()
{
	string results;
	string testError = "drawEmptyBox() failed: ";
    results += checkEquals("\n" + drawEmptyBox(5, 5), "\n" + EXAMPLE_EMPTY_BOX, "5, 5", testError);
    return results;
}

string testRightTriangle()
{
	string results;
	string testError = "drawRightTriangle() failed: ";
    results += checkEquals("\n" + drawRightTriangle(5), "\n" + EXAMPLE_RIGHT_TRIANGLE, "5", testError);
    return results;
}

string testFlippedRightTriangle()
{
	string results;
	string testError = "drawFlippedRightTriangle() failed: ";
    results += checkEquals("\n" + drawFlippedRightTriangle(5), "\n" + EXAMPLE_FLIPPED_RIGHT_TRIANGLE, "5", testError);
    return results;
}

string testMirroredRightTriangle()
{
	string results;
	string testError = "drawMirroredRightTriangle() failed: ";
    results += checkEquals("\n" + drawMirroredRightTriangle(5), "\n" + EXAMPLE_MIRRORED_RIGHT_TRIANGLE, "5", testError);
    return results;
}

string testIsosoleseTriangle()
{
	string results;
	string testError = "drawIsosoleseTriangle() failed: ";
    results += checkEquals("\n" + drawIsosoleseTriangle(5), "\n" + EXAMPLE_ISOSOLESE_TRIANGLE, "5", testError);
    return results;
}

bool boxDrawingTester(string subtest)
{
	string results;

	if (subtest == "all")
	{
		results += testFilledBox();
		results += testEmptyBox();
		results += testRightTriangle();
		results += testFlippedRightTriangle();
		results += testMirroredRightTriangle();
		results += testIsosoleseTriangle();
	}
	else if (subtest == "filled")    results += testFilledBox();
	else if (subtest == "empty")     results += testEmptyBox();
	else if (subtest == "right")     results += testRightTriangle();
	else if (subtest == "flipped")   results += testFlippedRightTriangle();
	else if (subtest == "mirrored")  results += testMirroredRightTriangle();
	else if (subtest == "isosolese") results += testIsosoleseTriangle();
	else results += "Subtest Not Found";

    if(subtest == "all" && results.size() == 0)
    {
    	cout << "All Test Passed!";
    } else
    {
    	cout << results;
    }
    return results.size() == 0;
}
