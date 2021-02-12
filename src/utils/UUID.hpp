/* ****************************************************************************
 * File Name   : UUID.hpp
 * Author      : DaiDai
 * Mail        : daidai4269@aliyun.com
 * Created Time: 四  2/11 19:01:10 2021
 *************************************************************************** */

#ifndef __UUID_HPP__
#define __UUID_HPP__

#include <random>
#include <sstream>
#include <string>

namespace workflows {

namespace {

static std::random_device rd;
static std::mt19937 gen(rd());
static std::uniform_int_distribution<> dis(0, 15);
static std::uniform_int_distribution<> dis2(8, 11);

}  // namespace UUID

std::string random_UUID();

}  // namespace workflows

#endif  // __UUID_HPP__
