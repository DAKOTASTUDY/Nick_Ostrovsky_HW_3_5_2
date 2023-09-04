

#include <iostream>
class Figure
{
protected:
    int side_count;
public:
    Figure() : side_count(0) {}
    Figure(int s_c) : side_count(s_c) {}
    int get_side()
    {
        return side_count;
    }
    int side_out()
    {

        return get_side();
    }
    virtual void publication() 
    {
        std::cout << get_side() << std::endl;
    };
    
};

class Triangle : public Figure
{
protected:
    int a1, b1, c1;
    int _a1, _b1, _c1;
public:

    Triangle() : Figure(3), a1(10), b1(10), c1(10), _a1(33), _b1(33), _c1(33) {};
    
    void publication() override
    {
        std::cout << "\nTriangle:" << std::endl;
        std::cout << "Sides: " << " Side A: " << a1 << " Side B" << b1 << "Side C " << c1 << std::endl;
        std::cout <<" Angle A "  << _a1 << " Angle B " << _b1 << " Angle C " << _c1 << std::endl;
    }


};
class Quad : public Figure
{
protected:
    int a1, b1, c1, d1;
    int _a1, _b1, _c1, _d1;
public:
    Quad() :  Figure(4), a1(10), b1(10), c1(10), d1(10), _a1(33), _b1(33), _c1(33), _d1(33) {};

    void publication() override
    {
        std::cout << "\n Quad:" << std::endl;
        std::cout << "Sides: " << " Side A: " << a1 << " Side B" << b1 << "Side C " << c1 << "Side D" << d1 << std::endl;
        std::cout << " Angle A " << _a1 << " Angle B " << _b1 << " Angle C " << _c1 <<" Side D" << _d1 << std::endl;
    }

};
class right_angle_triangle : public Triangle
{
protected:
    int a, b, c;
    int _a, _b, _c;
public: 

    right_angle_triangle() : Triangle(), a(10), b(10), c(10), _a(90), _b(45), _c(45) {};
    void publication() override
    {
        std::cout << "\n Right angle triangle:" << std::endl;
        std::cout << "Sides: " << " Side A: " << a1 << " Side B" << b1 << "Side C " << c1  << std::endl;
        std::cout << " Angle A " << _a1 << " Angle B " << _b1 << " Angle C " << _c1  << std::endl;
    }


};

class isosceles_triangle: public Triangle
{
protected:
    int a, b, c;
    int _a, _b, _c;
public:

    isosceles_triangle() : Triangle(), a(10), b(30), c(10), _a(80), _b(50), _c(50) {};
    void publication() override
    {
        std::cout << "\n Right angle triangle:" << std::endl;
        std::cout << "Sides: " << " Side A: " << a1 << " Side B" << b1 << "Side C " << c1 << std::endl;
        std::cout << " Angle A " << _a1 << " Angle B " << _b1 << " Angle C " << _c1 << std::endl;
    }


};

class equilateral_triangle : public Triangle
{
protected:
    int a, b, c;
    int _a, _b, _c;
public:

    equilateral_triangle() : Triangle(), a(30), b(30), c(30), _a(60), _b(60), _c(60) {};
    void publication() override
    {
        std::cout << "\n Right angle triangle:" << std::endl;
        std::cout << "Sides: " << " Side A: " << a1 << " Side B" << b1 << "Side C " << c1 << std::endl;
        std::cout << " Angle A " << _a1 << " Angle B " << _b1 << " Angle C " << _c1 << std::endl;
    }


};
class rectangle : public Quad
{
protected:
    int a1, b1, c1, d1;
    int _a1, _b1, _c1, _d1;
public:
    rectangle() : Quad(), a1(10), b1(10), c1(10), d1(10), _a1(90), _b1(90), _c1(90), _d1(90) {};

    void publication() override
    {
        std::cout << "\n Rectangle:" << std::endl;
        std::cout << "Sides: " << " Side A: " << a1 << " Side B" << b1 << "Side C " << c1 << "Side D" << d1 << std::endl;
        std::cout << " Angle A " << _a1 << " Angle B " << _b1 << " Angle C " << _c1 << " Side D" << _d1 << std::endl;
    }

};
class square : public Quad
{
protected:
    int a1, b1, c1, d1;
    int _a1, _b1, _c1, _d1;
public:
    square() : Quad(), a1(10), b1(10), c1(10), d1(10), _a1(90), _b1(90), _c1(90), _d1(90) {};

    void publication() override
    {
        std::cout << "\n Square:" << std::endl;
        std::cout << "Sides: " << " Side A: " << a1 << " Side B" << b1 << "Side C " << c1 << "Side D" << d1 << std::endl;
        std::cout << " Angle A " << _a1 << " Angle B " << _b1 << " Angle C " << _c1 << " Side D" << _d1 << std::endl;
    }

};

class parallelogram : public Quad
{
protected:
    int a1, b1, c1, d1;
    int _a1, _b1, _c1, _d1;
public:
    parallelogram() : Quad(), a1(30), b1(40), c1(30), d1(40), _a1(40), _b1(60), _c1(40), _d1(60) {};

    void publication() override
    {
        std::cout << "\n Parallelogram:" << std::endl;
        std::cout << "Sides: " << " Side A: " << a1 << " Side B" << b1 << "Side C " << c1 << "Side D" << d1 << std::endl;
        std::cout << " Angle A " << _a1 << " Angle B " << _b1 << " Angle C " << _c1 << " Side D" << _d1 << std::endl;
    }

};

class rhombus : public Quad
{
protected:
    int a1, b1, c1, d1;
    int _a1, _b1, _c1, _d1;
public:
    rhombus() : Quad(), a1(30), b1(40), c1(30), d1(40), _a1(40), _b1(60), _c1(40), _d1(60) {};

    void publication() override
    {
        std::cout << "\n Rhombus:" << std::endl;
        std::cout << "Sides: " << " Side A: " << a1 << " Side B" << b1 << "Side C " << c1 << "Side D" << d1 << std::endl;
        std::cout << " Angle A " << _a1 << " Angle B " << _b1 << " Angle C " << _c1 << " Side D" << _d1 << std::endl;
    }

};

int main()
{
    Figure a;
    Triangle b;
    Quad c;
    right_angle_triangle d;
    right_angle_triangle e;
    isosceles_triangle f;
    equilateral_triangle g;
    rectangle i;
    square k;
    parallelogram l;
    rhombus m;
   /* std::cout << "\n" << "Figure: \t" << a.publication() << std::endl;
    std::cout << "\n" << "Triangle: \t" << b.side_out() << std::endl;
    std::cout << "\n" << "Quad: \t\t" << c.side_out() << std::endl;*/

    a.publication();
    b.publication();
    c.publication();
    d.publication();
    e.publication();
    f.publication();
    i.publication();
    k.publication();
    l.publication();
    m.publication();
    return 0;
}


