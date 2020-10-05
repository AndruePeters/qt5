
add_library(cm-lib SHARED
  src/models/client.cpp
)

target_include_directories(cm-lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src src/models)
target_link_libraries(cm-lib PRIVATE Qt${QT_VERSION_MAJOR}::Core)
target_compile_definitions(cm-lib PRIVATE CMLIB_LIBRARY)
