#include <iostream>

#include "capture_solver.h"
#include "checkmate_solver.h"

namespace fatpup
{
    Solver* Solver::create(const std::string& solver_name, const Position& pos)
    {
        if (solver_name == "capture")
            return new CaptureSolver(pos);
        else if (solver_name == "checkmate")
            return new CheckmateSolver(pos);

        std::cout << "Unknown solver (" << solver_name << ")" << std::endl;
        return nullptr;
    }
}   // namespace fatpup
