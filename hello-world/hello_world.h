#ifndef HELLO_WORLD_H_
#define HELLO_WORLD_H_

#include <iostream>
#include <string>
using namespace std;

class Hello
{
private:
	string hello;
public:
	Hello() { hello = "Hello, world."; };
	Hello(string str) { hello = str; };
	friend ostream& operator<<(ostream& os, const Hello& p);
};

#endif // !HELLO_WORLD_H_
