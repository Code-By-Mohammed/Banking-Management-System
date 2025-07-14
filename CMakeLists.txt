# Not ready

cmake_minimum_required(VERSION 3.10)
project(BankSystme)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Source files
set(SOURCES
    Source/Account.cpp
    Source/SavingAccount.cpp
    Source/CurrentAccount.cpp
)

set(HEADERS
    Include/Account.h
    Include/SavingAccount.h
    Include/CurrentAccount.h
)

include_directories(
    Include
    Source
) 

add_executable(BMS 
        ${Include}
        ${Source}
)