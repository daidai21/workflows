/* ****************************************************************************
 * File Name   : concurrent_hash_map.hpp
 * Author      : DaiDai
 * Mail        : daidai4269@aliyun.com
 * Created Time: 二  2/ 9 23:07:08 2021
 *************************************************************************** */

#ifndef __CONCURRENT_HASH_MAP_HPP__
#define __CONCURRENT_HASH_MAP_HPP__

#include "./../config/def.hpp"

namespace workflows {

class ConcurrentHashMap {
 public:
  void put(std::string key, OBJ_PTR val);

  OBJ_PTR get(std::string key);

  void remove(std::string key);

 private:
  // TODO
};

}  // namespace workflows

#endif  // __CONCURRENT_HASH_MAP_HPP__
