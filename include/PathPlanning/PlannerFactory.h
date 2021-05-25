
#ifndef PLANNERFACTORY_H
#define PLANNERFACTORY_H

#include "PathPlanning/Planner.h"
#include "PathPlanning/AStar.h"
#include "PathPlanning/RRTStar.h"

enum PATHPLANNER {
    AStar=0,
    RRTStar
};

class PlannerFactory
{
public:
    static Planner create(PATHPLANNER &planner);
};

#endif // PLANNERFACTORY_H
