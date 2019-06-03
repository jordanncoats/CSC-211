#include "Point.h"
#include <string>
#include <bits/stdc++.h> 

using namespace std;

//Implement your class here.

        Point::Point(){
          int x = 0;
          int y = 0;
          int z = 0;
        }

        //Constructs a point object with X, Y, Z properties
        Point::Point(int x, int y, int z){
          this->x = x;
          this->y = y;
          this->z = z;
        }

      //Sets the X, Y, and Z properties of a point Object
        void Point::setX(int x){
          this->x = x;
        }
        void Point::setY(int y){
          this->y = y;
        }
        void Point::setZ(int z){
          this->z = z;
        }

        //Gets the X, Y, and Z properties from a point Object
        int Point::getX(){
          return this->x;
        }
        int Point::getY(){
          return this->y;
        }
        int Point::getZ(){
          return this->z;
        }

        //Returns a cartesian coordinate representation of a point Object
        // aka = (x,y,z)
        std::string Point::toCord(){
          std::string result = "(" + std::to_string(getX())+ "," + std::to_string(getY())+ "," + std::to_string(getZ()) + ")"; 
          return result;
        }

        //Calculates the Euclidean Distance of two points
        double Point::euDistance (Point p2){
          float distance = sqrt(pow(this->x - p2.getX(), 2) + pow(this->y - p2.getY(), 2) + pow(this->z - p2.getZ(), 2) * 1.0);
          return distance;
        }