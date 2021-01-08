#include "hello_world.h"

ostream& operator<<(ostream& os, const Hello& p)
{
    os << p.hello;
    return os;
}

int main()
{
    Hello hello;
    Hello hi("Hi, world.");
    cout << hello << hi << endl;
    return 0;
}
