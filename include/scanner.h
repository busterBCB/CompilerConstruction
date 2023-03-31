#pragma once


enum TokenType{
    None = 0,
    Id,                 // a | ... | z, A | ... | Z,
    BraceOpen,          // (
    BraceClose,         // )
    Op,                 // +, -, *, =
    Int, Bool, Var
};

class Scanner {
    private:
        int position;

        char current();

    public: 
        std::string_view charStream;
        int streamLength;

        Scanner(std::string_view charStream, std::size_t streamLength);

        TokenType scan();


};

