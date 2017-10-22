# yaus
Yet Another Universe Simulator

# Build instructions

yaus is built with [Gradle](http://gradle.org/ "Realize Build Happiness").
yaus unit tests use the [Google Test framework](https://github.com/google/googletest), which instead requires [CMake](https://cmake.org/) to build.

## pre-requisites

1. sudo apt-get install cmake
2. sudo apt-get install openjdk-8-jdk

## Linux
To build yaus yourself on Linux you have to:

1. execute the `./install-dependencies.sh` script
2. execute `./gradlew check`

## Windows
To build yaus yourself on Windows you have to run the following commands from a [Cygwin](https://www.cygwin.com/) shell:

1. execute the `./install-dependencies.sh` script
2. execute `./gradlew check`

*Please note that you have to install the Windows build of CMake, not the Cygwin one as it is not guaranteed to support latest Microsoft Visual Studio release generators.*

Get the [latest release](https://github.com/apetrozzelli/yaus/releases/latest)! 
-------------------------------------------------------------------------------

Statistics
----------

[![Build Status](https://travis-ci.org/apetrozzelli/yaus.png?branch=master)](https://travis-ci.org/apetrozzelli/yaus)
[![Build status](https://ci.appveyor.com/api/projects/status/navecp6nfn90tq0r/branch/master?svg=true&passingText=windows%20build%20passing)](https://ci.appveyor.com/project/apetrozzelli/yaus/branch/master)
[![Coverage Status](https://coveralls.io/repos/github/apetrozzelli/yaus/badge.svg?branch=master)](https://coveralls.io/github/apetrozzelli/yaus?branch=master)
[![Issue Stats](http://issuestats.com/github/apetrozzelli/yaus/badge/issue)](http://issuestats.com/github/apetrozzelli/yaus)
[![Issue Stats](http://issuestats.com/github/apetrozzelli/yaus/badge/pr)](http://issuestats.com/github/apetrozzelli/yaus)
[![License](https://img.shields.io/badge/license-MIT-blue.svg)](https://github.com/apetrozzelli/yaus/blob/master/LICENSE.txt)

