#include <iostream>

// uncomment __PRETTY_FUNCTION__ to see instantiation!

template<typename T>
T min(T v) {
    //std::cout << __PRETTY_FUNCTION__ << "\n";
    return v;
}

template<typename T, typename... Args>
T min(T first, Args... args) {
    //std::cout << __PRETTY_FUNCTION__ << "\n";
    auto r = min(args...);
    return first < r ? first : r;
}

int main(){

    std::cout << min(1, 2, 3, 8, 7) << std::endl;
    std::cout << min(4.1, 2.22, 3.7, 0.8, 0.7, 0.7) << std::endl;
    std::cout << min('z','a','x','b') << std::endl;

    return 0;
}
