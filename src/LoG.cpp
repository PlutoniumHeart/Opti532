#include "LoGEdge.h"


int main(int argc, char** argv)
{
    LoGEdge* LoGFilter = new LoGEdge("../data/cmanswirl.pgm", 2.0);

    LoGFilter->SetUpperThreshold(5);
    LoGFilter->SetLowerThreshold(3);
    LoGFilter->SaveAsOriginal(true);
    LoGFilter->Filter();
    LoGFilter->SaveEdgeMap("../data/LoGEdge_2.pgm");
    LoGFilter->SaveOriginalEdgeMap("../data/LoGOriginal.pgm");

    delete LoGFilter;
    return 0;
}