#include <iostream>
#include <map>


int main()
{
std::map<int, int> homid; //<home> <people>
std::map<int, int>::iterator it;
std::cout << "Write amount of houses on the street: "; 
int amount;
std::cin >> amount;
std::cout << std::endl;
std::string command;

for(int i = 1; i <= amount; i++ )
{
    std::cout << "How many people lives in the house id:" << i << " : ";
    int people;
    std::cin >> people;
    homid[i] = people;   
};

while(true)
{
    std::cout << "command: ";
    std::cin >> command; std::cout << std::endl;

    if(command == "0"||command == "0 ")
    {
        int id;
        std::cout << "Write id of the house: ";
        std::cin >> id;
        it = homid.find(id);
        if(it == homid.end())
        {
            std::cout << std::endl;
            std::cout << "There is no house with id:" << id << std::endl;
        }
        else
        {
            std::cout << std::endl;
            std::cout << "There is house with id: " << id << std::endl;
            std::cout << homid[id] << " people lives there" << std::endl; 
        }
    }
    else if(command == "1"||command == "1 ")
    {
        int id;
        std::cout << "Write houses id that you want ot delete: ";
        std::cin >> id;
        it = homid.find(id);
        if(it == homid.end())
        {
            std::cout << "error: unknown id" << std::endl;
        }
        else
        {
            homid.erase(id);
            std::cout << "House is successfully deleted!" << std::endl;
        };
    }
    else if(command == "2"||command == "2 ")
    {
        int id;
        std::cout << "Type new id of a house: ";
        std::cin >> id; std::cout << std::endl;
        it = homid.find(id);
        if(it == homid.end())
        {
            int people;
            std::cout << "How many people will live there: ";
            std::cin >> people; std::cout << std::endl;
            homid[id] = people;
            std::cout << "House successfully created!" << std::endl;
        }
        else
        {
            std::cout << "There is alredy house with id: " << id << std::endl;
        };
    }
    else
    {
        std::cout << "error: unknown command" << std::endl; 
    };
};

}
