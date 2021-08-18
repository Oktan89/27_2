#pragma once

class Shape
{
public:
    enum Color
    {
        NONE,
        RED,
        BLUE,
        GREEN
    };

private:
    double _coordinatesX{0};
    double _coordinatesY{0};
    Color _color{Shape::NONE};

public:
    Shape()
    {

    }
};