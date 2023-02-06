#include <iostream>
#include <list>
#include <iterator>

int main()
{
std::list<short> mylist;
std::list<short> listmerge = {40, 50, 2};
std::list<short>::iterator it = mylist.begin();
mylist.insert(it, 4);
mylist.insert(it, 5);
mylist.insert(it, 6);
copy(listmerge.begin(), listmerge.end(), std::ostream_iterator<short>(std::cout," "));
std::cout << std::endl;
for(it = mylist.begin();it != mylist.end(); it++)
{
std::cout << *it << " ";
}
std::cout << std::endl;
mylist.merge(listmerge);
copy(mylist.begin(), mylist.end(), std::ostream_iterator<short>(std::cout," "));
};
