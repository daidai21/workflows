/* ****************************************************************************
 * File Name   : work_status.hpp
 * Author      : DaiDai
 * Mail        : daidai4269@aliyun.com
 * Created Time: 二  2/ 9 22:30:49 2021
 *************************************************************************** */

#ifndef __WORK_STATUS_HPP__
#define __WORK_STATUS_HPP__

namespace workflows {

enum WorkStatus {
  INITIAL,
  RUNNING,
  FAILED,
  COMPLETED
};

}  // namespace wfcc

#endif  // __WORK_STATUS_HPP__
