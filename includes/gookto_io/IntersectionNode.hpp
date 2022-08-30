#include <string>
#include <iostream>
#include <vector>

#include "intersection/port.hpp"
#include "intersection/connection.hpp"
#include "intersection/intersectionPhase.hpp"

#pragma once


class IntersectionNode 
{
private:
    /*
    Node Types:
        Intersection = 0
        Normal = 1
        Terminal = 2
     */
    int type; 
    int id;
    int numConnections; //num_connection
    /**
     * numConnections: Applicable only for IntersectionNode
     */
    int numLinks; //num_port
    bool v2xActive; // active of v2x
    std::vector<port> connectedLinks;//port:  linkId, direction, type(in / out)
    /**
     * port: Intersection, Terminal
     */
    std::vector<connection> connectionTable; //connection:  connectionId (index), to_lane, to_link, from_lane, from_link, length

    
    //signalSequence: order(list), phase_length
    //may have to make this into a Pointer Loop

public:
    IntersectionNode(int type, int id, int num_connection, int num_port, bool v2xActive);


    void pushConnection( connection conn );
    void pushLink( port link );

    //Check Functions
    int getId() const { return id; }
    int getType() { return type; }
    int getNumConn() { return numConnections; }
    int getNumLink() { return numLinks; }
    bool getV2XActive() { return v2xActive; }

    std::vector<port> getLinks() { return connectedLinks; }
    std::vector<connection> getConnections() { return connectionTable; }


    void freeConnectedLinks() { std::vector<port>().swap(connectedLinks); }
    void freeConnectedTable() { std::vector<connection>().swap(connectionTable); }

};