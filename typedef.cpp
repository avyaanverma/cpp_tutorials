#include <vector>
#include<iostream>


//typedef a reserved keyword to create a new identifier/keyword for a reserved keyword
//identifier of typedef we have _t in end
typedef std::vector<std::pair<std::string,int>> pairlist_t;

typedef std::string word_t;
// typedef int number_t;
//typedef is now widely replaced with the using keyword 


using number_t= int;

int main(){
    // std::vector<std::pair<std::string,int>>
    pairlist_t pairlist;
    word_t my_Name= "Avyaan";
    
    std::cout << my_Name;
    return 0;
}