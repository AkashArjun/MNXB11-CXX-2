# MNXB11-CXX-2
The main branch for the second C++ Homework in the MNXB11 course

## Description
This repository contains the code and documentation for the first homework assignment in the MNXB11 course, which focuses on C++ programming. The homework involves implementing various C++ concepts and techniques as specified in the assignment guidelines.

## Contents
- `src/`: Contains the source code files for the homework assignment.
- `include/`: Contains header files used in the project.
- `tests/`: Contains test cases to validate the functionality of the implemented code. THIS SHOULD NOT BE MODIFIED.
- `main.cxx`: The main entry point for the program. Use this file to run and test your implementation.
- `CMakeLists.txt`: CMake configuration file for building the project. DO NOT MODIFY.

## Getting Started
To get started with the homework assignment, follow these steps:
1. Fork the repository to your own GitHub account.
2. Clone the repository to your local machine:
3. Create and checkout a branch called `cxxhomework` and modify the code in the `src/` and `include/` directories as per the assignment requirements. The assignment instructions are inside the header files in the `include/` directory.
4. Use the `main.cxx` file to test your implementation.
5. Push to your branch occasionally.

## Additional Information
You are free to solve the assignment in any way you see fit, as long as it meets the requirements specified in the assignment instructions. You may use any C++ standard library features and any additional libraries that are allowed by the course guidelines. You can also use header only to solve the exercise, unless otherwise specified in the assignment instructions.

## Build Instructions
To build and test your code for each assignment, follow these steps:
1. Ensure you are inside the course container
2. Navigate to the root directory of the repository.
3. Create a build directory and navigate into it:
   ```bash
   mkdir build
   cd build
   ```
4. Run CMake to configure the project:
   ```bash
    cmake .. -DLVL=<NUMBER>
    ```
    NUMBER should be replaced with the level of the assignment you are working on (1 or 2). If you do not specify a level, it will default to level 2. Each level builds on the previous one, so if you want to test level 2, you need to have completed level 1 first.

5. Build the project using make:
   ```bash
   make
   ```

6. You can run the main.cxx using the bash script provided:
   ```bash
   chmod +x runcode.sh
   ./runcode.sh
   ```

## Submission Guidelines
To submit your homework assignment, follow these steps:
1. Ensure that your code compiles -- the `make` command should complete with no errors -- if it does not compile, it is considered a failed submission.
2. Create a **draft pull request** to the main branch of the original repository.  
   See: <https://github.blog/news-insights/product-news/introducing-draft-pull-requests/>
3. When it is ready for review, mark the pull request as ready. Ideally this would be done after all tests pass.
4. Please also submit on canvas the link to your pull request. A pull request link looks like this:  
   <https://github.com/YOURGITHUBUSERNAME/MNXB11-HW1-CXX/pull/PRNUMBER>.  
   For example Florido's pull request number 5 would be  
   <https://github.com/floridop/MNXB11-HW1-CXX/pull/5>

## Use of AI Tools
You are allowed to use AI tools such as ChatGPT to assist you in completing the assignment. However, you must ensure that the final submission is your own work and that you understand all the code you submit. If you use AI tools, please acknowledge their use in your submission and describe how they were used.

## Contact
For any questions or issues please contact me via canvas or email.

