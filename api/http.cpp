//
// Created by mrybs on 17.02.23.
//


#define CURL_STATICLIB

#include "http.hpp"
#include <curl/curl.h>
#include <iostream>
#include <vector>

static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
  ((std::string*)userp)->append((char*)contents, size * nmemb);
  return size * nmemb;
}

std::string GET(const std::string& host, const std::string& request_data){
  CURL* curl;
  curl = curl_easy_init();
  if(curl){
    const std::string& url = request_data;
    std::string response;
    curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
    curl_easy_perform(curl);
    curl_easy_cleanup(curl);
    return response;
  }
  return "";
}

std::string VK_API(const std::string& protocol, const std::string& api_version, const std::string& access_token, const std::string& method, std::vector<arg> args, logger& Logger){
  std::string request;
  args.emplace_back("v", api_version);
  args.emplace_back("access_token", access_token);
  request = REQUEST_COMPONE(protocol, "api.vk.com/method/" + method, args);
  Logger.debug("Request for " + request);
  return GET("api.vk.com", request);
}

std::string REQUEST_COMPONE(const std::string& protocol, const std::string& link, std::vector<arg> args){
    std::string request;
    request = protocol + "://" + link;
    for(int i = 0; i < args.size(); i++){
      if(i != 0){
          request += "&";
      }else{
          request += "?";
      }
      request += args[i].name + "=" + args[i].data;
    }
    return request;
}
