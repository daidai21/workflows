/* ****************************************************************************
 * File Name   : default_work_report.cpp
 * Author      : DaiDai
 * Mail        : daidai4269@aliyun.com
 * Created Time: 六  2/13 02:18:18 2021
 *************************************************************************** */

#include "./default_work_report.hpp"

namespace workflows {

WorkStatus DefaultWorkReport::get_status() {
  return this->status;
}

WorkContext* DefaultWorkReport::get_context() {
  return this->context;
}

std::exception DefaultWorkReport::get_error() {
  return this->error;
}

std::string DefaultWorkReport::to_string() {
  return "DefaultWorkReport {" + 
      "status=" + this->status + 
      ", context=" + this->context + 
      ", error=" + this->error +
       "}";
}

}  //namespace workflows
