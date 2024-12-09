#ifndef GAUSSIANGENERATOR_H
#define GAUSSIANGENERATOR_H

#include "TimeSeriesGenerator.h"
#include <vector>

class GaussianGenerator : public TimeSeriesGenerator {
private:
    double moyenne;      
    double ecart;  
public:
    GaussianGenerator();
    GaussianGenerator(int seed, double moyenne, double ecart);
    std::vector<double> generateTimeSeries(int size) override;
};

#endif 
