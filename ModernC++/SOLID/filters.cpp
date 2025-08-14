#include <iostream>

struct FilterParam
{

};
class FilterBase
{
    public:
    FilterBase(FilterParam param):parameters{param}
    {}
    //basic functionality
   void setParameters(FilterParam param)
    {
        parameters = param;
    }
    private:
    FilterParam parameters;
};

class LowPassFilter : public FilterBase
{
    public:
    LowPassFilter (FilterParam param): FilterBase(param)
    {}
    //extended functionality
};

class BandPassFilter : public FilterBase
{
    public:
    BandPassFilter (FilterParam param): FilterBase(param)
    {}

    void setParameters(FilterParam param)
    {
       //do something else
    }

    //extended functionality

    void Apply()
    {
        //apply band pass filter
    }

};

int main()
{
    FilterParam param;
    BandPassFilter band_pass(param);
    band_pass.setParameters(param);
}