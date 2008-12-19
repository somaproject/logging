AM_CXXFLAGS =  $(BOOST_CPPFLAGS) $(SOMADEPS_CFLAGS) -pthread 
AM_LDFLAGS = $(BOOST_LDFLAGS) $(SOMADEPS_LIBS) $(BOOST_THREAD_LIB)  $(BOOST_PROGRAM_OPTIONS_LIB)


cc_sources = logging.cc 

noinst_LTLIBRARIES = liblogging.la

LIBADD = 

liblogging_la_SOURCES = $(cc_sources) 
liblogging_la_CXXFALGS = $(AM_CXXFLAGS)
