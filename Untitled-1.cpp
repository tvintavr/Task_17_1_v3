#include <iostream>

void swapab(int* &aa, int* &ba) {
    int* temp = aa;
    aa = ba;
    ba = temp;
}

int main() {
    int a;
    int b;

    std::cout<<"Input a: ";
    std::cin>>a;

    std::cout<<"Input b: ";
    std::cin>>b;
    
    int* aa = &a;
    int* ba = &b;
    
    swapab(aa, ba);
    
    std::cout << "a = " << *aa << std::endl;
    std::cout << "b = " << *ba << std::endl;
    system("pause");
}