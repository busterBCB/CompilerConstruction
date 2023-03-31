#include <stdexcept>
#include "scanner.h"

// class scanner {

//     public: 
//         scanner(){}

//         tokenType scan(char c){
//             switch (c)
//             {
//             case '(':
//                 return BraceOpen;
//             case ')':
//                 return BraceClose;
            
//             default:
//                 throw std::invalid_argument("unknown token");
//             }
//         }
// };





Scanner::Scanner(std::string_view charStream, std::size_t streamLength){
    this->position = 0;
    this->charStream = charStream;
    this->streamLength = streamLength;
}

char Scanner::current(){
    if (position >= streamLength) return '\0';
    return charStream[position];
}

Token Scanner::scan(){
    

    if(isalpha(current())){
        int start = position;

        while (isalpha(current()))
            position++;

        std::size_t length = position - start;
        std::string_view tokenCharStream = charStream.substr(start, length);
        return Token{Id, tokenCharStream, start};
    }


    if(isdigit(current())){

    }

    return Token{None, NULL, NULL};
}

