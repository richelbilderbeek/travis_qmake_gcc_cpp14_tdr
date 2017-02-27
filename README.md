# travis_qmake_gcc_cpp14_tdr

[![Travis CI logo](TravisCI.png)](https://travis-ci.org)

[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_tdr.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_tdr)

This GitHub is part of:

 * [the Travis C++ Tutorial](https://github.com/richelbilderbeek/travis_cpp_tutorial)
 
The goal of this project is to have a clean Travis CI build, with specs:

 * Build system: `qmake`
 * C++ compiler: `gcc`
 * C++ version: `C++14`
 * Libraries: `STL` only
 * Code coverage: none
 * Source: one file, `main.cpp`

The program's behavior is dependent on where it is run:

 * Locally: it will say `Hello world, from a local computer`
 * On Travis CI: it will say `Hello world, from Travis CI`

Detecting if code is run on Travis can be done using `std::getenv("TRAVIS")`. On Travis CI `TRAVIS` is present in the environment,
else it is (most probably) absent.

More complex builds:
 * [none]

Equally complex builds:
 * Travis-dependent compilation: [travis_qmake_gcc_cpp14_tdc](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_tdc)

Less complex builds:
 * No Travis-dependent run: [travis_qmake_gcc_cpp14](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14)
