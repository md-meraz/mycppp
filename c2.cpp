#include <vector>
#include <iostream>
int main(int argc, char const *argv[]) {
    std::vector<int> vec= {1,2};
    std::cout<<vec.size() <<std::endl;
    vec.push_back(3);
    std::cout << vec.front() << vec.back()<<std::endl;
    std::cout<<vec.size() <<std::endl;
    return 0;

}
