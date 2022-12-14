#pragma once
#ifndef H_RPM
#define H_RPM

#include "graph.h"

#endif 
#include <vector>
#include <random>
#include <fstream>
using namespace std;

void read_config(int& n, int& count);
int random_coordinate(double low, double high);
Point random_sample();
bool collision_free(const Point& point1, const Point& point2, const vector<Circle>& obstacles);
vector<Point> near(const Graph& graph, const Point& point, int& count);
vector<Point> rpm(Graph& graph, const Point& q_init, const Point& q_goal, const vector<Circle>& obstacles);
vector<Point> dijkstra(const Graph& graph, const Point& q_init, const Point& q_goal);