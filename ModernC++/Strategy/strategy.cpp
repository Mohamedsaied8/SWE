#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdint>

using namespace std;

struct Record
{
    string name;
    std::uint16_t street_id;
};

// it first_cont_begin_itr , it first_cont_end_itr, it second_cont_begin_itr , ptr_func
int main()
{
    vector<Record> vr(2);

    cout <<"strategy pattern example\n";
    vr[0].name = "Ahmed";
    vr[0].street_id = 1;

    vr[1].name = "Samir";
    vr[1].street_id = 2;

    auto CmpareByName = [](const Record& a, const Record& b)->bool{return a.name < b.name;};
    auto CmpareByAddress = [](const Record& a, const Record& b)->bool{return a.street_id > b.street_id;};

    sort(vr.begin(), vr.end(), CmpareByName); //depend on how insertion sort 
   
    for(auto v : vr)
    {
        cout << "vec.name:" << v.name <<endl;
    }
    
    sort(vr.begin(),vr.end(), CmpareByAddress);

    for(auto v : vr)
    {
        cout << "vec.address:" << v.street_id <<endl;
    }
    
    return 0;
}