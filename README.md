# Object Oriented Programming Basics With C++

This project demonstrates the use of object-oriented programming (OOP) principles in C++ to model various geometric shapes. It includes abstract and derived classes, showcasing inheritance, encapsulation, and polymorphism.

## Features

- Abstract Shape Class: Serves as the base class with pure virtual methods for getArea and toString.
- Derived Classes:
  - Rectangle: Represents a rectangle with methods for calculating area and perimeter.
  - Square: A specialized rectangle where all sides are equal.
  - Triangle: Represents a triangle with methods to calculate area.
  - Circle: Represents a circle with methods for calculating area, diameter, and circumference.

## File Structure

1. Shapes.h => Defines the class hierarchy and declares the following classes:
   - Shape (abstract base class)
   - Rectangle
   - Square
   - Triangle
   - Circle
     
2. Shapes.cpp
   - Provides the implementations for functions/methods declared in Shapes.h.

3. Main.cpp
   - Tests the functionality of the classes by creating instances of Rectangle, Square, Triangle, and Circle and printing their details using their toString method.

## How to Compile

Ensure all three files (Shapes.h, Shapes.cpp, and main.cpp) are in the same directory. Use the following command to compile:

```bash
g++ -o shapes main.cpp Shapes.cpp
```
Where shapes is the executable file.

## How to Run

Execute the compiled file:

```bash
./shapes
```

## Sample Output

```bash
SHAPE: Rectangle
WIDTH: 10.000000
HEIGHT: 5.000000
AREA: 50.000000 (square units)
CIRC: 30.000000

SHAPE: Square
WIDTH: 10.000000
HEIGHT: 10.000000
AREA: 100.000000 (square units)
CIRC: 40.000000

SHAPE: Triangle
BASE: 10.000000
HEIGHT: 5.000000
AREA: 25.000000 (square units)

SHAPE: Circle
RADIUS: 10.000000
DIAMETER: 20.000000
CIRCUMFERENCE: 62.831800
AREA: 314.159000 (square units)
```

## Key Concepts

- Abstraction: By using the toString and getArea methods in main, the internal implementation details of each shape are hidden. The program only interacts with their high-level interfaces, demonstrating abstraction.
- Inheritance: Demonstrated by Rectangle, Square, Triangle, and Circle inheriting from the base Shape class.
- Polymorphism: Use of pure virtual methods in Shape to enforce implementation of getArea and toString in derived classes.
- Encapsulation: Protected members (width, height, base, radius) are accessed through public methods.

## Future Enhancements

- Add menu where a user can choose the desired shape he/she/they want to obtain the dimesnions of.
- Add input validation for constructors to ensure dimensions are positive.
- Extend the project with additional shapes (e.g., pentagon, hexagon).

## Author 

Cristian Peña
