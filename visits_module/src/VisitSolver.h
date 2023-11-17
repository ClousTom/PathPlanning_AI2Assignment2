/*
    <one line to give the program's name and a brief idea of what it does.>
    Copyright (C) 2015  <copyright holder> <email>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef TESTSOLVER_H
#define TESTSOLVER_H

#include "ExternalSolver.h"
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>
#include <queue>
#include <unordered_map>

using namespace std;

class VisitSolver : public ExternalSolver
{
public:
    VisitSolver();
    ~VisitSolver();
    virtual void loadSolver(string *parameters, int n);
    virtual map<string, double> callExternalSolver(map<string, double> initialState, bool isHeuristic);
    virtual list<string> getParameters();
    virtual list<string> getDependencies();
    map<string, vector<double>> waypoint;
    map<string, vector<double>> landmark;

    map<string, string> region;
    map<string, vector<string>> connection;

    void parseWaypoint_conn(string waypoint_file);
    void parseLandmark(string landmark_file);

    void parseRegions(string region_file);
    void ShowResults(string path_file);

    double distance_euc(string wp_from, string wp_to);
    void find_path(string reg_from, string reg_to);

    map<string, vector<string>> region_mapping;
    vector<string> source, target;
    string starting_position;

    vector<string> path;
    double cost;

    void parseParameters(string parameters);

private:
    list<string> affected;
    list<string> dependencies;

    double calculateExtern(double external, double total_cost);
    // void localize(string from, string to);
    vector<string> findParameters(string line, int &n);
};

#endif // TESTSOLVER_H