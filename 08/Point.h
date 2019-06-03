#ifndef POINT
#define POINT

#include <string>

class Point{

    protected:
        int x;
        int y;
        int z;

    public:
    
        ///Constructs a point object with X, Y, Z properties set to 0
        Point();

        //Constructs a point object with X, Y, Z properties
        Point(int x, int y, int z);

      //Sets the X, Y, and Z properties of a point Object
        void setX(int x);
        void setY(int y);
        void setZ(int z);

        //Gets the X, Y, and Z properties from a point Object
        int getX();
        int getY();
        int getZ();

        //Returns a cartesian coordinate representation of a point Object
        // aka = (x,y,z)
        std::string toCord();

        //Calculates the Euclidean Distance of two points
        double euDistance (Point p2);

};




#endif // POINT