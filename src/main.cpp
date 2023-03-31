#include <iostream>
#include <string_view>
#include <list>

#include "scanner.h"

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

    return 0;
}