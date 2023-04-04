#ifndef FUNCTION_TIMER_HEADER
#define FUNCTION_TIMER_HEADER
#include <chrono>
#include <iostream>
#include <string>

/*
  Code from:
    https://stackoverflow.com/questions/58487924/using-chrono-for-time-measurement
*/

namespace dota2d
{
    class FunctionTimer
    {
      private:
          std::chrono::time_point<std::chrono::high_resolution_clock> pr_StartTime, pr_EndTime;
          std::string function_name;

      public:
          FunctionTimer(std::string _text)
          {
            pr_StartTime = std::chrono::high_resolution_clock::now();
            function_name = _text;
            std::cout << "function " << function_name << " has been starts.\n";
          }

          ~FunctionTimer()
          {
            pr_EndTime = std::chrono::high_resolution_clock::now();

            auto StartTimeMs = std::chrono::time_point_cast<std::chrono::microseconds>(pr_StartTime).time_since_epoch().count();
            auto EndTimeMs = std::chrono::time_point_cast<std::chrono::microseconds>(pr_EndTime).time_since_epoch().count();
            auto Duration = EndTimeMs - StartTimeMs;
            std::cout << "function " << function_name<< " took " << Duration << "ms to finish.\n";
          }
    };

}


#endif
