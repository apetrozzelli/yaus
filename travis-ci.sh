#!/usr/bin/env sh

./gradlew build
./gradlew installYausmainReleaseExecutable 
tar -zcvf yausmain-release-linux-binaries.tar.gz ./build/install/yausmain/release
