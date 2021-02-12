/* ****************************************************************************
 * File Name   : logger_test.cpp
 * Author      : DaiDai
 * Mail        : daidai4269@aliyun.com
 * Created Time: 三  2/10 00:00:18 2021
 *************************************************************************** */

#include "./../src/utils/logger.hpp"

#include <iostream>

using namespace std;
using namespace workflows;

int main(int argc, char* argv[]) {
  LOG_COUT << "test LOG_CONSOLE_ON";
  LOG_CONSOLE_ON;

  cout << endl;

  LOG(INFO) << "test INFO";
  LOG(ERRO) << "test ERRO";
  LOG(WARN) << "test WARN";
  cout << endl;

  LOG_INFO << "test LOG_INFO";
  LOG_ERRO << "test LOG_ERRO";
  LOG_WARN << "test LOG_WARN";

  LOG_CONSOLE_OFF;

  LOG(INFO) << "test INFO LOG_CONSOLE_OFF";
  LOG(ERRO) << "test ERRO LOG_CONSOLE_OFF";
  LOG(WARN) << "test WARN LOG_CONSOLE_OFF";

  cout << endl;

  LOG_CONSOLE_ON;
  LOG_FILE("./temp.log");
  LOG(INFO) << "test INFO";
  LOG(ERRO) << "test ERRO";
  LOG(WARN) << "test WARN";

  cout << endl;

  LOG_LVL_INFO;
  LOG_COUT << "123";
  LOG_LVL_WARN;
  LOG_COUT << "123";
  LOG_LVL_ERRO;
  LOG_COUT << "123";

  return 0;
}
