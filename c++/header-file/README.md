# C++ Header Files

### Best Practices
* Always include header guards
* Do not define variables in header files unless they are constants. Header files should generally only be used for declarations.
* Do not define functions in header files
* Each header file should have a specific job, and be as independent as possible. For example, you might put all your declarations related to functionality A in a.h and all your declarations related to functionality B in b.h. That way if you only care about A later, you can include a.h and not get any of the stuff related to B.
* Give your header files the same name as the source files they’re associated with (e.g. grades.h goes with grades.cpp).
* Try to minimize the number of other header files you include in your header files. Only include what is necessary.
* Do not include .cpp files

Source: [LearnCpp - 1.9]( [1.9 — Header files « Learn C++](http://www.learncpp.com/cpp-tutorial/19-header-files/)
