/**
 * STS19 Captain
 * @file : InputAgents.hpp
 * @version : 1.0
 * @author : Jeyun Kim
 */

#ifndef INPUTAGENTS_H
#define INPUTAGENTS_H

#include <iostream>
#include <string>
#include <vector>

class InputAgents
{
private:
    int id;

    int typeId;
    double dpt_time;

    std::vector<int> link_seq;
    std::vector<int> node_seq;
    std::vector<int> station_seq;

public:
    InputAgents(int id, int typeId, double dpt_time);

    void setLinkSeq(std::string linkSeq);
    void setNodeSeq(std::string nodeSeq);
    void setStationSeq(std::string stationSeq);

    // access functions
    int getId()
    {
        return id;
    }
    int getTypeId()
    {
        return typeId;
    }
    double getDepTime()
    {
        return dpt_time;
    }

    std::vector<int> getLinkSeq()
    {
        return link_seq;
    }
    std::vector<int> getNodeSeq()
    {
        return node_seq;
    }
    std::vector<int> getStationSeq()
    {
        return station_seq;
    }
};

#endif