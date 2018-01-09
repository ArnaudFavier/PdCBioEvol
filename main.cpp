#include <iostream>
#include <chrono>
#include <omp.h>
#include "src/World.h"
#include "src/Common.h"

using namespace std;

typedef std::chrono::high_resolution_clock Clock;

int main(int argc, char* argv[]) {
  if (argc > 1)
    omp_set_num_threads(atoi(argv[1]));

  auto chronoStart = Clock::now();

  printf("Init binding matrix\n");
  Common::init_binding_matrix(897685687);

  printf("Create World\n");
  World* world = new World(32, 32, 897986875);

  printf("Initialize environment\n");
  world->init_environment();

  bool test = false;
  if (test) {
    world->test_mutate();
  } else {
    printf("Initialize random population\n");
    world->random_population();

    printf("Run evolution\n");
    world->run_evolution();
  }

  auto chronoEnd = Clock::now();
  std::cout << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<float>>(chronoEnd - chronoStart).count() << " seconds for " << Common::Number_Evolution_Step << " steps and " << omp_get_max_threads() << " threads" << std::endl;
}
