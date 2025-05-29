#include <iostream>
#include <unordered_map>
using namespace std;




void output(unordered_map<string,string> *courses){
    for (auto item : *courses){
        cout << item.first << " - " << item.second
        << endl;
    }
}

void insert_only(unordered_map<string,string> &courses){
    courses.insert({"COMP2804","Discrete Structures II"});
}



int main(){
    unordered_map<string, string> courses = {{"COMP1405","Introduction to Programming I"}, {"COMP1406","Introduction to Programming II"}};
    courses.insert({"COMP1805","Discrete Structures I"});
    unordered_map<string,string> *courses_ptr = &courses;
    insert_only(courses);
    courses.insert({"COMP3203","Algorithm I"});

    cout << courses["COMP3203"] << endl;
    cout << courses.at("COMP3203") << endl;

    auto it = courses.find("COMP2804");
    if (it!=courses.end()){
        cout << "FOUND!" << endl;
        cout << it->first << " - " << it->second << endl;
        cout << "-----------" << endl;
    }
    else{
        cout << 404 << endl;
    }

    courses["COMP3203"] = "Network Computing";

    courses.erase("COMP1805");

    output(courses_ptr);






}