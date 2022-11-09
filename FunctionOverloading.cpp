#include<iostream>

void bakePizza()
{
     std::cout<<"Here is your pizza!\n";
}
void bakePizza(std::string topping1){
    std::cout<<"Here is your "<<topping1 << " pizza!\n";
}
void bakePizza(std::string topping1,std::string topping2){
    std::cout<<"Here is your "<<topping1<<" and your "<<topping2<< " pizza!\n";
}
int main(){
    bakePizza();
    bakePizza("pepperoni");
    bakePizza("mushroom","pepperoni");

return 0;
}
// A Function along with it's parameters is known as a function signature
