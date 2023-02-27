cmake_minimum_required(VERSION 3.24)
project(BankAccountManagement)

set(CMAKE_CXX_STANDARD 17)

add_executable(BankAccountManagement main.cpp Bank.cpp BankAccount.cpp)
