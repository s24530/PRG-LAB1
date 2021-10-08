#include <iostream>
#include <string>

auto askuserforintiger(std::string const prompt) -> int
{
    if(not prompt.empty())
    {
        std::cout << prompt;
    }
    auto value = std::string{};
    std::getline(std::cin,value);
    return std::stoi(value);
}

auto main() -> int
{ 
    auto const a = askuserforintiger("a = ");
    if(a>=0)
    std::cout<< a<<std::endl;
    else 
    std::cout<<-a<<std::endl;
    return 0;

}
