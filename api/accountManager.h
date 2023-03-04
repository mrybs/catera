//
// Created by mrybs on 26.02.23.
//

#ifndef CATERA_ACCOUNTMANAGER_H
#define CATERA_ACCOUNTMANAGER_H

#include <string>
#include <fstream>
#include <utility>
#include "../nlohmann/json.hpp"

using json = nlohmann::json;

class accountManager {
private:
  std::string accounts_file;
public:
  explicit accountManager(std::string accounts_file){
    this->accounts_file = std::move(accounts_file);
  }
  accountManager addAccount(std::string token){
    std::ifstream ifile(accounts_file);
    std::string file;
    if (ifile.is_open()){
      std::string line;
      while (getline(ifile, line))
        file += line;
    }
    ifile.close();
    if(file.empty()) {
      json accounts = {
          {"accounts", {token}},
      };
      std::ofstream ofile(accounts_file);
      ofile.write(to_string(accounts).c_str(), to_string(accounts).size());
      ofile.close();
    }else{
      json accounts = json::parse(file);
      if(!accounts["accounts"].contains(token)){
        accounts["accounts"].push_back(token);
      }
      std::ofstream ofile(accounts_file);
      ofile.write(to_string(accounts).c_str(), to_string(accounts).size());
      ofile.close();
    }
    return *this;
  }
  std::vector<std::string> getAccounts(){
    std::ifstream ifile(accounts_file);
    std::string file;
    if (ifile.is_open()){
      std::string line;
      while (getline(ifile, line))
        file += line;
    }
    ifile.close();
    if(file.empty()) {
      return {};
    }
    json accounts = json::parse(file);
    if(!accounts.contains("accounts")) {
      return {};
    }
    return accounts["accounts"];
  }

  accountManager removeAccountByIndex(short index){
    std::ifstream ifile(accounts_file);
    std::string file;
    if (ifile.is_open()){
      std::string line;
      while (getline(ifile, line))
        file += line;
    }
    ifile.close();
    if(file.empty())
      return *this;

    json accounts = json::parse(file);
    if(accounts["accounts"].size() > index)
      accounts["accounts"].erase(index);
    std::ofstream ofile(accounts_file);
    ofile.write(to_string(accounts).c_str(), to_string(accounts).size());
    ofile.close();
    return *this;
  }
  accountManager removeAllAccounts(){
      json accounts;
      std::ofstream ofile(accounts_file);
      ofile.write(to_string(accounts).c_str(), to_string(accounts).size());
      ofile.close();
      return *this;
  }
};

#endif // CATERA_ACCOUNTMANAGER_H
