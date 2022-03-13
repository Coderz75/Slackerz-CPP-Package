#ifndef TIME_H
#define TIME_H
#include <string>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

std::string time();

#endif