#include <iostream>
#include <sstream>
#include <string>
#include <filesystem>

#include <gookto_io/InputPTline.hpp>

InputPTline::InputPTline(int id, double interval) : id(id), interval(interval) {};

void InputPTline::setLinkSeq(std::string linkSeq)
{
    std::stringstream ss(linkSeq);
    int linkid;

    while (ss >> linkid)
        link_seq.push_back(linkid);
}

void InputPTline::setNodeSeq(std::string nodeSeq)
{
    std::stringstream ss(nodeSeq);
    int nodeid;

    while (ss >> nodeid)
        node_seq.push_back(nodeid);
}

void InputPTline::setStationSeq(std::string stationSeq)
{
    std::stringstream ss(stationSeq);
    int stationid;

    while (ss >> stationid)
        station_seq.push_back(stationid);
}