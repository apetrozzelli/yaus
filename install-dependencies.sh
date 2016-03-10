echo "building dependencies..."

git submodule init
git submodule update

cd dependencies

echo "googletest"

cd googletest

export SHARED_LIB=OFF
export STATIC_LIB=ON
export CMAKE_PKG=OFF
#export VERBOSE_MAKE=true

mkdir build || true
mkdir build/googletest || true
mkdir build/googletest/debug || true
cd build/googletest/debug

cmake -Dgtest_build_samples=OFF \
      -Dgmock_build_samples=OFF \
      -Dgtest_build_tests=OFF \
      -Dgmock_build_tests=OFF \
      -DCMAKE_CXX_FLAGS=$CXX_FLAGS \
      -DCMAKE_BUILD_TYPE=Debug \
      ../../../googletest
cmake --build . --config debug

cd ..
mkdir release
cd release

cmake -Dgtest_build_samples=OFF \
      -Dgmock_build_samples=OFF \
      -Dgtest_build_tests=OFF \
      -Dgmock_build_tests=OFF \
      -DCMAKE_CXX_FLAGS=$CXX_FLAGS \
      -DCMAKE_BUILD_TYPE=Release \
      ../../../googletest
cmake --build . --config release 

