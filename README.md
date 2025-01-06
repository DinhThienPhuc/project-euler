# Project Euler Solutions

A collection of solutions for [Project Euler](https://projecteuler.net) problems implemented in C/C++ programming languages.

## Overview

This application provides algorithmic solutions to Project Euler mathematical/programming problems using:

- C/C++

## Project Structure

```bash
project-euler/
├── problems/ # Individual problem solutions
│   └── 0001/ # Problem folders
│       ├── answer.cpp # C/C++ implementation
│       ├── input.h # C/C++ problem definition
│       ├── overview.pdf # Solution explanation
│       └── solution.cpp # C/C++ solution
├── helpers/ # Shared utility functions
├── create-problem.sh # SCript to quick template a problem
└── run.sh # SCript to run problem's answer and solution
```

## Getting Started

### Prerequisites

- C++ compiler (GCC recommended)

### Creating New Solutions

1. Generate problem template:

```bash
# Example: ./create-problem.sh 0001 MULTIPLES_OF_3_AND_5
./create-problem.sh <number> <name>
```

2. Implement the answer in `problems/<number>/answer.cpp`
3. Run and test solution:

```bash
# Example: ./run.sh problems/0001
./run.sh problems/<number>
```

9.  Submit result to Project Euler website for checking
10. Copy and paste the overview.pdf file for best answer
11. Implement the solution in `problems/<number>/solution.cpp`
12. Run the command below for testing answer. If any test does not pass, fix the answer
13. Re-compile and run answer using `run.sh` file
14. Check the answer and self-study for better knowledge

## Development Workflow

1. Problem Definition

- Define problem requirements in input.h

2. Implement

- Write C++ solution in solution.cpp

3. Verification

- Compare with Project Euler website
- Document optimal solution

## License

MIT

## Author

@DinhThienPhuc
