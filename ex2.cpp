#include <iostream>

void setPosHelper(int & x, int & y, int newX, int newY)
{
    // any additional checks, like newX > 1000 ? 1000 : newX
    x = newX;
    y = newY;
}

void setRadiusHelper(int & r, int newRadius)
{
    r = newRadius > 0 ? newRadius : 0;
}

class Circle
{
private:
    int x, y;
    int radius;

public:
    Circle(int x, int y, int radius) : x {x}, y {y}, radius {radius}
    {}

    int getX() const
    {
        return x;
    }

    int getY() const
    {
        return y;
    }

    int getRadius() const
    {
        return radius;
    }

    void setPos(int x, int y)
    {
        setPosHelper(this->x, this->y, x, y);
    }

    void setRadius(int radius)
    {
        setRadiusHelper(this->radius, radius);
    }

    void draw()
    {
        // draw circle
        std::cout << "draw a circle\n";
    }
};

class SmileyFace
{
private:
    int x, y;
    int radius;
    int eyeRadius;

public:
    SmileyFace(int x, int y, int radius, int eyeRadius) : x {x}, y {y}, radius {radius}, eyeRadius {eyeRadius}
    {}

    int getX() const
    {
        return x;
    }

    int getY() const
    {
        return y;
    }

    int getRadius() const
    {
        return radius;
    }

    int getEyeRadius() const
    {
        return eyeRadius;
    }

    void setPos(int x, int y)
    {
        setPosHelper(this->x, this->y, x, y);
    }

    void setRadius(int radius)
    {
        setRadiusHelper(this->radius, radius);
    }

    void setEyeRadius(int eyeRadius)
    {
        this->eyeRadius = eyeRadius;
    }

    void draw()
    {
        // draw circle
        // then draw eyes and mouth inside the circle
        std::cout << "draw a circle, then the eyes and mouth\n";
    }
};

int main()
{
    Circle c {0, 0, 10};
    SmileyFace s {0, 0, 10, 1};

    c.draw();
    s.draw();
}
