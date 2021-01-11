#ifndef SERVER_PARSER_INCLUDE_H_
#define SERVER_PARSER_INCLUDE_H_

#include <string>

#include "FileController/FileStorage.h"


std::string ParserToJson(const Change& ch);
Change ParserFromJson(const std::string& j);


#endif  // SERVER_PARSER_INCLUDE_H_
