# finite-diff (https://github.com/zfergus/finite-diff)
# License: MIT
if(TARGET finitediff::finitediff)
    return()
endif()

message(STATUS "Third-party: creating target 'finitediff::finitediff'")

include(CPM)
CPMAddPackage("gh:zfergus/finite-diff@1.0.1")

# Folder name for IDE
set_target_properties(finitediff_finitediff PROPERTIES FOLDER "ThirdParty")