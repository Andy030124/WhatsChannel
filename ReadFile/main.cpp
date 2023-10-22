#include <iostream>     // for cout 
#include <fstream>      // for ifstream & ofstream
#include <string>       // for string object container

/**
*  @brief Load a input file path into an string (file not binary)
*  @param filepath the file path you want read 
*/
std::string readFile(std::string filepath){
    std::ifstream file{filepath}; // automatic open file
    // return an string with the file content
    return std::string{
        // start into file begin
        std::istreambuf_iterator<char>{ file },
        // automatic end detection (EOF)
        std::istreambuf_iterator<char>{}
    };
}

int main(){
    std::cout << readFile("./fileexample.txt") << "\n";
    return 0;
}


