//
// Created by mrybs on 18.02.23.
//

#ifndef CATERA_LOGGER_H
#define CATERA_LOGGER_H

#include <string>
#include <iostream>
#include <chrono>
#include <fstream>

class logger{
public:
  std::string filename;

  logger(std::string filename){
    this->filename = filename;
    info("Logger initialized");
  }

  logger debug(std::string text){
    return log("DEBUG", text);
  }

  logger info(std::string text){
    return log("INFO", text);
  }

  logger warning(std::string text){
    return log("WARNING", text);
  }

  logger error(std::string text){
    return log("ERROR", text);
  }

  logger critical(std::string text){
    return log("CRITICAL", text);
  }


private:
  logger log(std::string type, std::string text){
    std::ifstream ifile(filename);
    std::string old_text = "";
    if (ifile.is_open()){
      std::string line;
      while (getline(ifile, line))
        old_text += line;
    }
    old_text += "\n";
    ifile.close();
    std::ofstream file(filename);
    auto now = std::chrono::system_clock::now();
    std::time_t end_time = std::chrono::system_clock::to_time_t(now);
    std::string current_time = std::ctime(&end_time);
    std::string* buffer = new std::string(old_text + "[" + current_time.substr(0, current_time.size()-2) + "] " + type + ": " + text);
    file.write(buffer->c_str(), buffer->size());
    file.close();
    return *this;
  }
};

#endif // CATERA_LOGGER_H
