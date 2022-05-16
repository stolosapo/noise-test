AUTOMAKE_OPTIONS = subdir-objects
ACLOCAL_AMFLAGS = $(ACLOCAL_FLAGS)

bin_PROGRAMS = noisetest


mainincludedir = $(includedir)/noisetest
maininclude_HEADERS = \
    AssertException.h \
    Assertion.h \
    Logger.h \
    UnitTest.h \
    UnitTestFunction.h \
    UnitTestSuite.h


common_sources = \
    AssertException.cpp \
    Assertion.cpp \
    Logger.cpp \
    UnitTest.cpp \
    UnitTestSuite.cpp


noisetest_SOURCES = main.cpp $(common_sources)
noisetest_LDADD = libnoisetest.la
noisetest_CXXFLAGS = $(AM_CXXFLAGS)

lib_LTLIBRARIES = libnoisetest.la
libnoisetest_la_LDFLAGS = -version-info 1:0:0 -pthread
libnoisetest_la_CXXFLAGS = $(AM_CXXFLAGS) -pthread
libnoisetest_la_SOURCES = $(common_sources)
