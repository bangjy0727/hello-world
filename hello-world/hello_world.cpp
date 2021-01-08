#include "hello_world.h"

ostream& operator<<(ostream& os, const Hello& p)
{
    os << p.hello;
    return os;
}

int main()
{
    Hello hello;
    cout << hello << endl;
    return 0;
}