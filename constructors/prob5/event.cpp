#include <iostream>
using namespace std;
class Event{
    private:
        string name;
        string detail;
        string type;
        string organiser;
        int attendeesCount;
        double projectedExpenses;
    public:
        Event(){ }
        Event(string name, string detail, string type, string organiser, int attendeesCount, double projectedExpenses){
            this->name = name;
            this->detail = detail;
            this->type = type;
            this->organiser = organiser;
            this->attendeesCount = attendeesCount;
            this->projectedExpenses = projectedExpenses;
        }
        void setName(string name){
            this->name = name;
        }
        void setDetail(string detail){
            this->detail = detail;
        }
        void setType(string type){
            this->type = type;
        }
        void setOrganiser(string organiser){
            this->organiser = organiser;
        }
        void setAttendeesCount(int attendeesCount){
            this->attendeesCount = attendeesCount;
        }
        void setProjectedExpenses(double projectedExpenses){
            this->projectedExpenses = projectedExpenses;
        }
        string getName(){
            return this->name;
        }
        string getDetail(){
            return this->detail;
        }
        string getType(){
            return this->type;
        }
        string getOrganiser(){
            return this->organiser;
        }
        int getAttendeesCount(){
            return this->attendeesCount;
        }
        double getProjectedExpenses(){
            return this->projectedExpenses;
        }
        

};
