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
    auto const b = askuserforintiger("b = ");
    auto const c = askuserforintiger("c = ");
    if(a>b && a>c)
    std::cout<<a<<std::endl;
    else if(b>a && b>c)
    std::cout<<b<<std::endl;
    else 
    std::cout<<c<<std::endl;
    return 0;
}
