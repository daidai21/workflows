/* ****************************************************************************
 * File Name   : atomic_int.hpp
 * Author      : DaiDai
 * Mail        : daidai4269@aliyun.com
 * Created Time: 六  2/13 02:38:14 2021
 *************************************************************************** */

#ifndef __ATOMIC_INT_HPP__
#define __ATOMIC_INT_HPP__

#include <atomic>

namespace workflows {

class AtomicInt {
 public:
  AtomicInt() {
    this->num_ = 0;
  }

  AtomicInt(int num) {
    this->num_ = num;
  }

 public:
  int get();
  void set(int num);
  void operator=(int num);
  void operator++();
  void operator--();

  void dec();
  void inc();

  // increment and get
  int inc_and_get();
  // decrease and get
  int dec_and_get();

  void add(int num);
  void sub(int num);

  int add_and_get(int num);
  int sub_and_get(int num);

 private:
  std::atomic<int> num_;
};

}  //namespace workflows

#endif  // __ATOMIC_INT_HPP__
