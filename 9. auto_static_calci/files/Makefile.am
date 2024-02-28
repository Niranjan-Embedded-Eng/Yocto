lib_LTLIBRARIES = libmycalculator.la
libmycalculator_la_SOURCES = add.c div.c mul.c sub.c
libmycalculator_la_CFLAGS = -I. # Include current directory for header file
libmycalculator_la_LIBADD = -lm # Link against the math library (for math functions)


AM_CPPFLAGS = -I.
# Add app.c to the sources
bin_PROGRAMS = stcalci
stcalci_SOURCES = main.c
stcalci_LDADD = libmycalculator.la
include_HEADERS = header.h



