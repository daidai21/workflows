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

#include "./../utils/concurrent_hash_map.hpp"

template <typename ValType>
class WorkContext {
 public:
  void put();

  void get();

  std::set<std::string> get_keys();

  std::string to_str();

 private:
  ConcurrentHashMap<std::string, ValType> context;
};

#endif  // __WORK_CONTEXT_HPP__
