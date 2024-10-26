#include <iostream>
#include <string>

class IntPair
{
private:
    int m_x{};
    int m_y{};

public:
    IntPair(int x, int y) : m_x{x}, m_y{y} {}
    IntPair(const IntPair &p) = delete;

    int x() const { return m_x; }
    int y() const { return m_y; }
};

void print(IntPair p)
{
    std::cout << p.x() << p.y();
}

class Something
{
public:
    Something() = default;
    Something(const Something &)
    {
        std::cout << "Copy called";
    }
};

Something rvo()
{
    return Something{};
}

Something nrvo()
{
    Something s{};
    return s;
}

int main()
{

    std::cout << "INIt s1";
    Something s1{rvo()};
    std::cout << "Initializing s2";
    Something s2{nrvo()};

    return 0;
}
