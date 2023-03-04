#include "api.h"

json api::wall_post(const std::vector<arg>& args){
    return api_request("wall.post", args);
}
