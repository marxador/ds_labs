On line 11 removed the & std::vector<Line>& since the function already returns the function and isn't refrenecing an old object

Had to #include <algorithm> for std::sort() on line 23

removed #include "point.h" in line.cpp so the point class wasn't redefined