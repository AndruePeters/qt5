# Andrue Peters
# 10/4/2020
add_executable(ClientTests src/tst_clienttests.cpp)
add_test(NAME ClientTests COMMAND ClientTests)

target_link_libraries(ClientTests PRIVATE Qt::Test)

