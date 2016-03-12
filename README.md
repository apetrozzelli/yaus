# yaus
Yet Another Universe Simulator
==============================

linux, osx:
[![Build Status](https://travis-ci.org/apetrozzelli/yaus.png?branch=master)](https://travis-ci.org/apetrozzelli/yaus)

windows:
[![Build status](https://ci.appveyor.com/api/projects/status/navecp6nfn90tq0r/branch/master?svg=true)](https://ci.appveyor.com/project/apetrozzelli/yaus/branch/master)

[![Coverage Status](https://coveralls.io/repos/github/apetrozzelli/yaus/badge.svg?branch=master)](https://coveralls.io/github/apetrozzelli/yaus?branch=master)

[![Issue Stats](http://issuestats.com/github/apetrozzelli/yaus/badge/issue)](http://issuestats.com/github/apetrozzelli/yaus)

[![Issue Stats](http://issuestats.com/github/apetrozzelli/yaus/badge/pr)](http://issuestats.com/github/apetrozzelli/yaus)
***

Build instructions
------------------
yaus is built with [Gradle](http://gradle.org/ "Realize Build Happiness").
yaus unit tests use the [Google Test framework](https://github.com/google/googletest), which instead requires [CMake](https://cmake.org/) to build.

To build yaus yourself you have to:

1. execute the `./install-dependencies.sh` script
2. execute `./gradlew check`
