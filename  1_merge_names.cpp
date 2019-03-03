#include <iostream>
#include <vector>
#include <set>

std::vector<std::string> unique_names(const std::vector<std::string>& names1, const std::vector<std::string>& names2)
{
    std::set<std::string> set {names1.begin(), names1.end()};
    std::copy (names2.begin(), names2.end(), std::inserter(set, set.end()));
    return std::vector<std::string> {set.begin(), set.end()};;
}

#ifndef RunTests
int main()
{
    std::vector<std::string> names1 = {"Ava", "Emma", "Olivia"};
    std::vector<std::string> names2 = {"Olivia", "Sophia", "Emma"};
    
    std::vector<std::string> result = unique_names(names1, names2);
    for(auto element : result)
    {
        std::cout << element << ' '; // should print Ava Emma Olivia Sophia
    }
}
#endif