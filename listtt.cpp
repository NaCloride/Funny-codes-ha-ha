#include <iostream>
#include <list>

int main()
{
std::list<int> listt = {1, 42, 12, 54, 79, 13, 456, 51, 53, 10};
listt.sort();
std::list<int>::iterator it;
it = listt.begin();
for(it; it != listt.end(); it++)
{

std::cout << *it << std::endl;

};

};
