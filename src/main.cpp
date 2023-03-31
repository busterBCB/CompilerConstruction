#include <iostream>
#include <string_view>
#include <list>

#include "scanner.h"

inline const char* ToString(TokenType t)
{
    switch (t)
    {
        case Id:            return "Id";
        case BraceOpen:     return "BraceOpen";
        case BraceClose:    return "BraceClose";
        case Op:            return "Op";
        case Int:           return "Int";
        case Bool:          return "Bool";
        case Var:           return "Var";
        default:            return "None";
    }
}

void printToken(struct Token t){
    std::cout << ToString(t.tokenType) << '{' << t.charStream << '}' << std::endl;
}

int main(int argc, char** argv) 
{
    std::string_view source("foo (n) :: Int -> (Int, Int)\n"
                            "{\n"
                            "	return (2, 2);\n"
                            "}\n"
                            "transpose (p1, p2) :: (Int, Int) (Int, Int) -> (Int, Int)\n"
                            "{\n"
                            "	return ((p1.fst + p2.fst), (p1.snd + p2.snd));\n"
                            "}\n"
                            "scale(p, scalar) :: (Int, Int) Int -> (Int, Int) {\n"
                            "	return (p.fst * scalar, p.snd * scalar);\n"
                            "}");

    Scanner scanner(source, source.length());

    struct Token token = scanner.scan();
    printToken(token);

    return 0;
}