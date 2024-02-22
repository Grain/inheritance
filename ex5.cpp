#include <iostream>

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
        this->x = x; // could have some check, like x > 1000 ? 1000 : x
        this->y = y;
    }

    void setRadius(int radius)
    {
        this->radius = radius > 0 ? radius : 0;
    }

    virtual void draw()
    {
        // draw circle
        std::cout << "draw a circle\n";
    }
};

class SmileyFace : public Circle
{
private:
    int eyeRadius;

public:
    SmileyFace(int x, int y, int radius, int eyeRadius) : Circle {x, y, radius}, eyeRadius {eyeRadius}
    {}

    int getEyeRadius() const
    {
        return eyeRadius;
    }

    void setEyeRadius(int eyeRadius)
    {
        this->eyeRadius = eyeRadius > 0 ? eyeRadius : 0;
    }

    void draw() override
    {
        // draw circle
        Circle::draw();
        // then draw eyes and mouth inside the circle
        std::cout << "then the eyes and mouth\n";
    }
};

void moveAndDraw(Circle & c)
{
    c.setPos(c.getX() + 1, c.getY() - 1);
    c.draw();
}

int main()
{
    Circle c {0, 0, 10};
    SmileyFace s {0, 0, 10, 1};

    moveAndDraw(c);
    moveAndDraw(s);
}
