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
    if(a>b)
    std::cout<<a<<">"<<b<<std::endl;
    else if(a<b)
    std::cout<<a<<"<"<<b<<std::endl;
    else 
    std::cout<<a<<"="<<b<<std::endl;
    return 0;
}
