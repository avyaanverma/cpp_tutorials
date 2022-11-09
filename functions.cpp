#include<iostream>

// void happyBirthday(){
//         std::cout << "Happy Birthday To you \n";
//         std::cout << "Happy Birthday To you \n";
//         std::cout << "Happy Birthday dear \n";
//         std::cout << "Happy Birthday To you \n";
//     }

// int main(){
//     happyBirthday();
//     return 0;
// }
 void happyBirthday(std::string name);
 int main(){
    happyBirthday("Avyaan");
    return 0;
}
 

void happyBirthday(std::string name){
        std::cout << "Happy Birthday To you "<<name<<"\n";
        std::cout << "Happy Birthday To you "<<name<<"\n";
        std::cout << "Happy Birthday dear "<<name<<"\n";
        std::cout << "Happy Birthday To you "<<name<<"\n";
    }


