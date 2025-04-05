# GitHub User Activity Tracker

This program fetches the activity events of a specific GitHub user and prints the number of occurrences for each type of event.

## Requirements

- **cpr**: A C++ HTTP client library used to make requests to the GitHub API.
- **nlohmann/json**: A C++ library for handling JSON data.

## Usage

1. Clone or download the repository to your local machine.
2. Install the required dependencies:
   - **cpr**: Follow the installation guide [here](https://github.com/libcpr/cpr).
   - **nlohmann/json**: Install it using [vcpkg](https://github.com/microsoft/vcpkg) or add it manually.

3. Compile the program with your preferred C++ compiler, ensuring both libraries are linked correctly.
   
4. Run the program from the command line with the following syntax:

   ```bash
   github-user-activity {user}
