/* ****************************************************************************
 * File Name   : abstract_workflow.hpp
 * Author      : DaiDai
 * Mail        : daidai4269@aliyun.com
 * Created Time: 二  2/ 9 22:25:28 2021
 *************************************************************************** */

#ifndef __ABSTRACT_WORKFLOW_HPP__
#define __ABSTRACT_WORKFLOW_HPP__

#include "./workflow.hpp"

#include <string>

namespace workflows {

class AbstractWorkFlow : public WorkFlow {
 public:
  AbstractWorkFlow(std::string name) {
    this->name = name;
  }

  std::string get_name() {
    return this->name;
  }

 private:
  std::string name;
};

}  // namespace workflows

#endif  // __ABSTRACT_WORKFLOW_HPP__
