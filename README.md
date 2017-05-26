# distributed-systems
A three-tier Airport Lookup Distributed System developed in C language

## Description
The project aims to design and implement a three-tiered client-server system to serve users’ airport lookups by using RPC. The system consists of three components: the client, the places server and the airports server.
Given a client’s query, the system is required to find the five nearest airports for the specified location. 
  The data flow looks like:
1. The client contacts the places server with a location
2. The places server searches its local database for the location and gets its latitude and longitude.
3. The places server then contacts the airports server using the latitude and longitude.
4. The airport server returns the five nearest airports to the places server.
5. The places server returns the five nearest airports to the client.
6. The client prints each airport code, name, and distance.
