#include <iostream>

int main(){
    int choice = 0;
    std::cout << "Enter:" <<std::endl << "1 - for Coffee"<< std::endl 
              << "2 - for Tea" << std::endl;
    std::cin >> choice;
    if(choice == 1){
        std::cout << "Your coffee is on the way. Thank you" << std::endl;
    }
    if(choice == 2){
        std::cout << "Your tea is on the way. Thank you" << std::endl;
    }
    else {
        std::cout << "You entered wrong choice " << std::endl;
    }

    return 0;
}