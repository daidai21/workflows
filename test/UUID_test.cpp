/* ****************************************************************************
 * File Name   : UUID_test.cpp
 * Author      : DaiDai
 * Mail        : daidai4269@aliyun.com
 * Created Time: 四  2/11 19:18:10 2021
 *************************************************************************** */

#include "./../src/utils/UUID.hpp"

#include <iostream>

using namespace std;
using namespace workflows;

int main(int argc, char* argv[]) {
  cout << random_UUID() << endl;
  return 0;
}
