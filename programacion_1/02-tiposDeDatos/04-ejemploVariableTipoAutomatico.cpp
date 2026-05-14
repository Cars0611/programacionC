#include<iostream>
using namespace std;
int main(){

    auto var1(20);
    auto var2(3.14);
    auto var3(1.44f);
    auto var4(31.81);
    auto var5{'a'};
   
std::cout << var1 << "\t" << sizeof(var1) << " bytes" << std::endl;
std::cout << var2 << "\t" << sizeof(var2) << " bytes" << std::endl;
std::cout << var3 << "\t" << sizeof(var3) << " bytes" << std::endl;
std::cout << var4 << "\t" << sizeof(var4) << " bytes" << std::endl;
std::cout << var5 << "\t" << sizeof(var5) << " bytes" << std::endl;

var5=35.5f;
std::cout << var5 << "\t" << sizeof(var5) << " bytes" << std::endl;

}