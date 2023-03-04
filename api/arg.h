//
// Created by mrybs on 01.03.23.
//

#ifndef CATERA_ARG_H
#define CATERA_ARG_H

#include <ios>
#include <string>
#include <sstream>
#include <iostream>

struct arg{
    std::string name;
    std::string data;

    arg(const std::string& name, const std::string& data){
        this->name = name;
        this->data = URLEncode(data);
    }

    static std::string URLEncode(const std::string& text){
        std::string encoded = std::string();
        for(char c: text){
            encoded += "%";
            if(makeHexByChar(c).size() == 8){
              encoded += makeHexByChar(c)[6];
              encoded += makeHexByChar(c)[7];
            }else
              encoded += makeHexByChar(c);
        }
        return encoded;
    }

    static std::string makeHexByChar(char Char){
        std::stringstream buffer;
        buffer << std::hex << int(Char);
        return buffer.str();
    }
};

#endif // CATERA_ARG_H
