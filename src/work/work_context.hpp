/* ****************************************************************************
 * File Name   : work_context.hpp
 * Author      : DaiDai
 * Mail        : daidai4269@aliyun.com
 * Created Time: 二  2/ 9 22:29:18 2021
 *************************************************************************** */

#ifndef __WORK_CONTEXT_HPP__
#define __WORK_CONTEXT_HPP__

#include <set>
#include <string>

#include "./../config/def.hpp"
#include "./../utils/concurrent_hash_map.hpp"

namespace workflows {

class WorkContext {
 public:
  WorkContext() {
    this->context = new ConcurrentHashMap();
  }

 public:
  void put(std::string key, OBJ_PTR val) {
    this->context->put(key, val);
  }

  void get();

  std::set<std::string> get_keys();

  std::string to_str();

 private:
  ConcurrentHashMap* context;
};
}  // namespace workflows

#endif  // __WORK_CONTEXT_HPP__
