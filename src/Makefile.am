AUTOMAKE_OPTIONS = subdir-objects
ACLOCAL_AMFLAGS = $(ACLOCAL_FLAGS)

bin_PROGRAMS = noisetest


mainincludedir = $(includedir)/noisetest
maininclude_HEADERS = \
    CircuitBreaker.h \
    MockHealthPolicy.h


common_sources = \
    CircuitBreaker.cpp \
    CircuitBreakerClosedState.cpp \
    CircuitBreakerHalfOpenState.cpp \
    CircuitBreakerHealthPolicy.cpp \
    CircuitBreakerOpenState.cpp \
    CircuitBreakerState.cpp \
    TimeService.cpp \
    MockHealthPolicy.cpp


noisetest_SOURCES = main.cpp $(common_sources)
noisetest_LDADD = libnoisetest.la
noisetest_CXXFLAGS = $(AM_CXXFLAGS)

lib_LTLIBRARIES = libnoisetest.la
libnoisetest_la_LDFLAGS = -version-info 1:0:0 -pthread
libnoisetest_la_CXXFLAGS = $(AM_CXXFLAGS) -pthread
libnoisetest_la_SOURCES = $(common_sources)
