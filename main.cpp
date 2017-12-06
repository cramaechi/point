//Program reads in data for several pointss on a plane from the user, creates
//the pointss, then exercises various member functions of the class Point.
#include <iostream>
#include <cstdlib>
#include "point.h"

using namespace std;

const int NUMBER_OF_POINTS = 5;

void input(Point p[]);
//Postcondition: All the Point objects in array p haves been given plot
//coordinates and shift coordinates.

void output(Point p[]);
//Precondition: Array p is non-empty.
//Postcondition: All of the Point objects in array p are rotated 90 degrees
//clockwise and are then printed out in terms of their current locations.

int main()
{
	Point point[NUMBER_OF_POINTS];

    input(point);
    output(point);

	return 0;
}

void input(Point p[])
{
    int x, y;

	for (int i = 0; i < NUMBER_OF_POINTS; i++)
	{
		cout<<"Enter the location of point "<<i+1<<": ";
		cin>>x>>y;
		p[i].sets(x,y);
		cout<<endl;
	}
    
    cout<<endl;

	for (int i = 0; i < NUMBER_OF_POINTS; i++)
	{
		cout<<"Enter the number of x/y coordinate shifts for point "<<i+1<<": ";
		cin>>x>>y;
		p[i].movePoint(x,y);
		cout<<endl;
	}
}

void output(Point p[])
{
	for (int i = 0; i < NUMBER_OF_POINTS; i++)
	{
		cout<<"Rotating point "<<i+1<<" by 90 degrees clockwise around the origin.\n";
		p[i].rotateNinetyDegrees();
	}

    cout<<endl;

	for (int i = 0; i < NUMBER_OF_POINTS; i++)
    {
		cout<<"The current location for point "<<i+1<<" is: (";
        cout<<p[i].getX()<<", "<<p[i].getY()<<")\n";
    }
}
