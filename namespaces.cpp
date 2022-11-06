#include<iostream>
//provides a solutoin for avoiding name conflicts.
//For some projects we need a unique name for every entity. A namespace allows for identically named entities as long as the namespaces are different

//using namespace std is a bad habit however the standard namespace has hundreds of entity 
// one alternative we have
// using std::cout
// using std:: string
namespace first{
    int x=1;
}
namespace second {
    int x=2;
}
int main(){
    int x=0;
    std::cout << "value of default x : "<< x<< '\n';
    std::cout << "value of first x : "<< first::x << '\n';
    std ::cout << "value of second x : " << second::x << '\n'; 
 

return 0;
}