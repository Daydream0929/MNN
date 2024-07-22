# csi-nn2

file(GLOB MNN_CSINN2_SRCS
    ${CMAKE_CURRENT_LIST_DIR}/backend/*.cpp
    ${CMAKE_CURRENT_LIST_DIR}/backend/*.hpp
    ${CMAKE_CURRENT_LIST_DIR}/execution/*.cpp
    ${CMAKE_CURRENT_LIST_DIR}/execution/*.hpp
)

add_library(
    MNN_CSINN2 
    OBJECT
    ${MNN_CSINN2_SRCS}
)

# IF (MNN_ARM82)
#     target_compile_options(MNN_CSINN2 PRIVATE)
# ELSE()
#     target_compile_options(MNN_CSINN2 PRIVATE)
# ENDIF()

target_include_directories(MNN_CSINN2 PRIVATE 
    ${CMAKE_CURRENT_LIST_DIR}/backend
    ${CMAKE_CURRENT_LIST_DIR}/execution
)
