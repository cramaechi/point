/*---------------------------------------------------------
This is the implementation for the class Point. The
interface is in the the file point.h.

Author: Chibuikem Amaechi
Email:  cramaechi@me.com
---------------------------------------------------------*/
#include "point.h"

void Point::sets(int newX, int newY)
{
    x = newX;
    y = newY;
}

void Point::movePoint(int xIncrements, int yIncrements)
{
    x+=xIncrements;
    y+=yIncrements;
}

void Point::rotateNinetyDegrees()
{
    int temp;
    temp = x;
    x = y;
    y = -temp;
}

int Point::getX()
{
    return x;
}

int Point::getY()
{
    return y;
}
