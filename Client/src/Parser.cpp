#include <nlohmann/json.hpp>

#include "Parser.h"

using json = nlohmann::json;


std::string ParserToJson(const Change& ch) {
    json j =  {{"cmd", ch.cmd},
               {"fileId", ch.fileId},
               {"position",{
                               {"symbolId", ch.position.symbolId}}
               },
               {"newSymbolId", ch.newSymbolId},
               {"symbol", ch.symbol}};
    return j.dump();
}

Change ParserFromJson(const std::string& change) {
    json j = json::parse(change);
    Change m_ch {};
    m_ch.cmd = j["cmd"].get<Command>();
    m_ch.fileId = j["fileId"].get<size_t>();
    m_ch.position = Position{j["position"]["symbolId"].get<size_t>()};
    m_ch.newSymbolId = j["newSymbolId"].get<size_t>();
    m_ch.symbol = j["symbol"].get<char>();
    return m_ch;
}
