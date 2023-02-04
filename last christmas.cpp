#include <Vector>
#include <iostream>
#include <cstdlib>
#include <windows.h>

int main()
{
int stroke_counter = 0;

std::vector<std::string> snow;
for (int i = 0; i < 36; i++)
{
 snow.push_back(" ");
 std::cout << snow[i];
};

while (true)
{
int size = snow.size();
int cell = std::rand()%size;
snow[cell] = "*";

Sleep(50);

for (int i = 0; i < size; i++)
{
    std::cout << snow[i];
};
std::cout << std::endl;

stroke_counter = stroke_counter + 1;

while (stroke_counter == 28)
{
system("cls");
stroke_counter = 0; 
};

for (int i = 0; i < size; i++)
{
snow[i] = " ";
}   
}
}
