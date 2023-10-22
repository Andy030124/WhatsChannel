#include <iostream>
#include <fstream> // for ifstream & ofstream
#include <vector> // for vector container
#include <string> // for string object container

// String Version
std::string readFile(std::string filepath){
    std::ifstream file{filepath}; // automatic open file
    // return an string with the file content
    return std::string{
        std::istreambuf_iterator<char>{ file }, // start into file begin
        std::istreambuf_iterator<char>{} // automatic end detection (EOF)
    };
}


int main(){
    std::cout << readFile("./fileexample.txt") << "\n";
    return 0;
}


