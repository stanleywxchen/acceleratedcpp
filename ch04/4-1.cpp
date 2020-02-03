#include <iostream>
#include <string>
#include <algorithm>
 
struct Student_info
{
    std::string name;
};
 
int main()
{
    // int maxlen;     // this causes error
    std::string::size_type maxlen;
    Student_info s;
    std::max(s.name.size(), maxlen);
    return 0;
}