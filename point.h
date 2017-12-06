/*--------------------------------------------------------
Description: This is the header file point.h. This is the 
interface for the class Point. Values of this type that
used to store and manipulate the location of a point in
the plane.

Author: Chibuikem Amaechi
Email:  cramaechi@me.com
--------------------------------------------------------*/

class Point
{
public:
	void sets(int newX, int newY);
	//Precondition: Both variables newX and newY are
    //negative or non-negative integers. Postcondition: Both values of
    //private member variables x and y have been set by the
    //arguments.

	void movePoint(int xIncrements, int yIncrements);
	//Precondition: Both variables xIncrements and 
    //yIncrements are either negative or non-negative integers.
	//Postcondition: Both values of the arguments have been added to or
    //subtracted from the private member variables of the class Point.

	void rotateNinetyDegrees();
	//Postcondition: Rotates the point by 90 degrees clockwise around the
    //origin.

	int getX();
	//Postcondition: Returns the value of the private member variable
    //x.
	
	int getY();
	//Postcondition: Returns the value of the private member variable
    //y;

private:
	int x;
	int y;
};
