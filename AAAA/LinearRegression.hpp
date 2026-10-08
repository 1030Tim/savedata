#ifndef LINEARREGRESSION_HPP
#define LINEARREGRESSION_HPP

// cost function
double costfunction(double w, double x, double b, double label)
{   
    double prid = w*x+b;
    double cost = (label-prid)*(label-prid);
    return cost;
}


double gradient_descient()
{
    
}

#endif