#ifndef SHAPES_H
#define SHAPES_H
#include <string>

// SHAPE CLASS DECLARATION
class Shape{
    protected:
        std::string label;
    
    public:
        virtual double getArea() = 0;
        virtual std::string toString() = 0; //pure virtual functions
                                            //to be defined in childdren classes

        void setLabel(std::string label){
            this->label = label;
        }
};

// RECTANGLE CLASS DECLARATION
class Rectangle : public Shape{
    protected:
        double width;
        double height;
    
    public:
        Rectangle(double width, double height){
            this->width = width;
            this->height = height;
            setLabel("Rectangle");
        }

        double getPerimeter();
        double getArea();
        std::string toString();
};

// SQUARE CLASS DECLARATION

class Square : public Rectangle{
    public:
        Square(double l) : Rectangle (l, l){ //a squre is just a rectangle with equal lenghts
                                             //therefore no need to declare a new constructor
            setLabel("Square");
        }
};


// TRIANGLE CLASS DECLARATION

class Triangle : public Shape{
    protected:
        double base;
        double height;
    public:
        Triangle(double base, double height){
            this->base = base;
            this->height = height;
            setLabel("Triangle");
        }
        
        double getArea();
        std::string toString();

};

// CIRCLE CLASS DECLARATION

class Circle : public Shape{
    protected:
        double radius;
    public:
        Circle(double r){
            this->radius = r;
            setLabel("Circle");
        }
        double getDiameter();
        double getCircum();
        double getArea();
        std::string toString();
};

#endif
