set(lib_name eepromAT93C46D)

aux_source_directory(. SRC_FILES)

add_library(${lib_name} STATIC ${SRC_FILES})
target_include_directories(${lib_name} INTERFACE .)