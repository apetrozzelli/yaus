echo "building dependencies..."

git submodule init
git submodule update

cd dependencies

echo "googletest"

cd googletest

export SHARED_LIB=OFF
export STATIC_LIB=ON
export CMAKE_PKG=OFF
export BUILD_TYPE=debug
#export VERBOSE_MAKE=true

mkdir build || true
mkdir build/googletest || true
cd build/googletest

cmake -Dgtest_build_samples=OFF \
      -Dgmock_build_samples=OFF \
      -Dgtest_build_tests=OFF \
      -Dgmock_build_tests=OFF \
      -DCMAKE_CXX_FLAGS=$CXX_FLAGS \
      ../../googletest
cmake --build . --config Debug
