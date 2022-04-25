# 规定需要的cmake最低版本是 2.8
cmake_minimum_required(VERSION 2.8)
# 工程名称是 test
project(chat_server)
# 向工程添加存放源文件的子目录 src
# 子文件夹可以有CMakeLists.txt
add_subdirectory(src)
