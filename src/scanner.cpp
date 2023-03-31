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

TokenType Scanner::scan(){
    
    if(isalpha(current())){
        
    }

    
    if(isdigit(current())){

    }

    return None;
}

