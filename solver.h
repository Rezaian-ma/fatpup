#ifndef FATPUP_SOLVER_H
#define FATPUP_SOLVER_H

#include <string>

#include "position.h"

namespace fatpup
{
    class Solver
    {
    public:
        static Solver* create(const std::string& solver_name, const Position& pos);

        virtual ~Solver() {}

        virtual void start() = 0;
        virtual void stop() = 0;

        virtual Move getBestMove() = 0;
        virtual void moveDone(Move move) = 0;

        // to-do: analysis/kibitzing mode API (return best lines with evaluations)
    };
}   // namespace fatpup

#endif // FATPUP_SOLVER_H
