/* ****************************************************************************
 * File Name   : atomic_int.cpp
 * Author      : DaiDai
 * Mail        : daidai4269@aliyun.com
 * Created Time: 六  2/13 02:43:12 2021
 *************************************************************************** */

#include "./atomic_int.hpp"

namespace workflows {

int AtomicInt::get() {
  return this->num_;
}

void AtomicInt::set(int num) {
  this->num_ = num;
}

void AtomicInt::operator=(int num) {
  this->num_ = num;
}

void AtomicInt::operator++() {
  this->num_++;
}

void AtomicInt::operator--() {
  this->num_--;
}

void AtomicInt::dec() {
  this->num_--;
}

void AtomicInt::inc() {
  this->num_++;
}

int AtomicInt::inc_and_get() {
  this->inc();
  return this->get();
}

int AtomicInt::dec_and_get() {
  this->dec();
  return this->get();
}

void AtomicInt::add(int num) {
  this->num_.fetch_add(num, std::memory_order_relaxed);
}

void AtomicInt::sub(int num) {
  this->num_.fetch_sub(num, std::memory_order_relaxed);
}

int AtomicInt::add_and_get(int num) {
  this->add(num);
  return this->get();
}

int AtomicInt::sub_and_get(int num) {
  this->sub(num);
  return this->get();
}

}  //namespace workflows
