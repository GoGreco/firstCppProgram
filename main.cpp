//include the standard library //
//Input Output Stream// 
#include <iostream>

//the main function, were the execution happens
//any funtion writen must jave specified what type of data it will return
// before the funtion name that is
//inside the () we put parameters of the function 

int main() {

    //Declares a variable with the type of value stored in it and the name
    int randomNumber;
    //assigning a value to the variable
    randomNumber = 0; 

    //calls the library (std for standard)
    //defines the command
    //sta(Standard) :: (wich command will be used) cout(character out)
    // this is called a statement, it finishes with ';' (fuck python)
    std::cout << "Hello World\n";
    std::cout << randomNumber;

    //returns 0 because the OS will only know the program was successfully executed if it returns what it was defined to output
    return 0;
}