/* 
 * File:   util.h
 * Author: manu
 *
 * Created on 23 février 2013, 10:36
 */

#ifndef UTIL_H
#define	UTIL_H

#include <string>

int rand_a_b(int a, int b);
std::string intToString(int);
int stringToInt(std::string str);
std::string get_file_contents(const char *filename);

#endif	/* UTIL_H */

