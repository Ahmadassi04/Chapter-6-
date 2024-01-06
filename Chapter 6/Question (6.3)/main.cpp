#include <iostream>

int check(int x){

    if(x & 1){
        std::cout << x << " is odd\n";
    }
    else{
        std::cout << x << " is even\n";
    }
    return x;
}

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    check(x);

    return 0;
}
