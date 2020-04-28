#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include<sstream>
#include<list>
#include "EventType.cpp"
using namespace std;
class Event
{
string eventName;
EventType type;
string eventDetail;
string eventOrganiser;
public:
void setEN(string eventName)
{
    this->eventName=eventName;
}
void setED(string eventDetail)
{
    this->eventDetail=eventDetail;
}
void setEO(string eventOrganiser)
{
    this->eventOrganiser=eventOrganiser;
}
string getEN()
{
    return eventName;
}
string getED()
{
    return eventDetail;
}
string getEO()
{
    return eventOrganiser;
}



};
