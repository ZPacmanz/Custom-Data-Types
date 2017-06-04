// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
//def class
class triangle {
	int length; char letter;
	// make commands'methods' for class
public:
	//def constructor function(used to make class members)
	triangle(int l, char c) {
		length = l;
		letter = c;
	}

	// draws a defined triangle
	void draw() {
		for (int i = 0; i < length; i++)
		{
			for (int y = 0; y <= i; y++)
			{
				printf("%c", letter);
			}
				printf("\n");
		}
	}
};

void main()
{
	triangle mytri(5, 'Q');
	mytri.draw();

	// wait for user input(default is close when done)
	getchar();
}

