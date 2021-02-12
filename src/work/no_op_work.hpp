/* ****************************************************************************
 * File Name   : no_op_work.hpp
 * Author      : DaiDai
 * Mail        : daidai4269@aliyun.com
 * Created Time: 六  2/13 03:30:45 2021
 *************************************************************************** */

#ifndef __NO_OP_WORK_HPP__
#define __NO_OP_WORK_HPP__

#include "./work.hpp"
#include "./../config/work_status.hpp"

namespace workflows {

class NoOpWork : public Work {
 public:
  std::string get_name() {
    return random_UUID();
  }

  WorkReport* execute(WorkContext* workContext) {
    return new DefaultWorkReport(COMPLETED, workContext);
  }
};

}  // namespace workflows

#endif  //__NO_OP_WORK_HPP__
