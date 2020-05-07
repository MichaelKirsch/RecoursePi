#include <iostream>

double piRecursive(int& iteration, int &target, int up, double last_value)
{
    if(iteration==target)
        return last_value;
    iteration++;
    int zaehler = up;
    int nenner = (2*zaehler)+1;
    
}

void do_pi(int how_many)
{
    int iter=0;
    double pi = 2*piRecursive(iter,how_many,1,0.f);
                std::cout << pi << std::endl;
}

int main() {

    return 0;
}
