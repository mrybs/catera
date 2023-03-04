//
// Created by mrybs on 17.02.23.
//

#ifndef CATERA_HTTP_HЗЗ
#define CATERA_HTTP_HЗЗ

#include <curl/curl.h>
#include <iostream>
#include <sstream>
#include <vector>
#include "../tools/logger.h"
#include "arg.h"

std::string GET(const std::string& host, const std::string& request_data);
std::string REQUEST_COMPONE(const std::string& protocol, const std::string& link, std::vector<arg> args);
std::string VK_API(const std::string& protocol, const std::string& api_version, const std::string& access_token, const std::string& method, std::vector<arg> args, logger& Logger);

#endif // CATERA_HTTP_HЗЗ
