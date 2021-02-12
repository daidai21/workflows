/* ****************************************************************************
 * File Name   : concurrent_hash_map.hpp
 * Author      : DaiDai
 * Mail        : daidai4269@aliyun.com
 * Created Time: 二  2/ 9 23:07:08 2021
 *************************************************************************** */

#ifndef __CONCURRENT_HASH_MAP_HPP__
#define __CONCURRENT_HASH_MAP_HPP__

namespace workflows {

template <typename KeyType, typename ValType>
class ConcurrentHashMap {
 public:
  void put(KeyType key, ValType val);

  ValType get(KeyType key);

  void remove(KeyType key);

 private:
  // TODO
};

}  // namespace workflows

#endif  // __CONCURRENT_HASH_MAP_HPP__
